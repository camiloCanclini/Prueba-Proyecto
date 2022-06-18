// SFML-Main.cpp
// Una plantilla para la creación de programas con SFML
// Programación I
// Tecnicatura Universitaria de Programación
// Universidad Tecnológica Nacional
#include<SFML/Graphics.hpp>
using namespace sf;
int main()
{
	// Objetos que definen la ventana y una figura
	VideoMode vm(400, 400);
	RenderWindow window(vm, "Ventana SFML");
	CircleShape circulo(100.f);
	circulo.setFillColor(Color::Magenta);

	// Procesador de eventos de la interfase gráfica
	while (window.isOpen())
	{
		// Si recibimos un evento de cierre cerramos el programa
		// Si no hay eventos para procesar entonces pintamos la ventana
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		// NO hay eventos a procesar, borro la pantalla grafica
		// Dibujo los objetos indicados (en memoria)
		// Renderizo la pantalla en el display
		window.clear();
		window.draw(circulo);
		window.display();
	}
	return 0;
}

