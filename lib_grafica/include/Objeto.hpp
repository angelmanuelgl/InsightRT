#ifndef OBJETO_HPP
#define OBJETO_HPP

#include <SFML/Graphics.hpp>

class Objeto {
public:
    sf::Font font;

    // destructor virtual 
    virtual ~Objeto() = default;

    // Todas las coasas (graficas eje xy (espacio fase, grafica de tiempo), grafioco circulares, dibuajr grafo etce tc)
    //  heredaran este metodo
     // ojo: quen no conviene que reciva el panel
    virtual void draw(sf::RenderWindow& window, sf::RenderStates states, sf::Vector2f pSize ) = 0;

    // cosas comunes
     Objeto(void){
        // fuente por defecto
        const std::string& ruta_fuente = "assets/fonts/Roboto.ttf";
        if( !font.loadFromFile(ruta_fuente) ){  /* error */ }
    }
};

#endif