#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


int main(){
  sf::RenderWindow window(sf::VideoMode({800,800}) , "2d_dodge_player", sf::Style::Default);
  window.setPosition({0,0});



  auto on_close = [&window](sf::Event::Closed){
    window.close();
  };

  auto close_on_escape = [&window](const sf::Event::KeyPressed& event){
    if(event.scancode == sf::Keyboard::Scancode::Escape){
      window.close();
    }
  };

  // Main loop 
  while(window.isOpen()){
    window.handleEvents(on_close, close_on_escape);


    window.clear(sf::Color::Red);
    window.display();
  }


  
}
