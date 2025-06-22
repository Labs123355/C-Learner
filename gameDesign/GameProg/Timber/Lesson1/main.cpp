#include <iostream>
#include <SFML/Graphics.hpp> 

int main()
{
	// Create a video mode object 1920,1080 
	sf::VideoMode vm(1920, 1000); 
	// Create and open a window for the game 
	sf::RenderWindow window(vm, "Timber!!!", sf::Style::Fullscreen);
	// Create a texture object to hold graphic on the GPU 
	sf::Texture textureBackground ;
    // load graphic into the texture 
	textureBackground.loadFromFile("graphics/background.png");

	//Create a sprite 
    sf::Sprite spritebackground; // a sprite is the character in our game

	// Attach the texture to the sprite
	spritebackground.setTexture(textureBackground); 

	// Set the sprite Background to cover the screen  
	while (window.isOpen()) 
	{
	/* 
	 * Handle the Players input
	 */
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
		// DRAW THE SCENE 
	
		// Clear everthing from last frame 
		window.clear(); 

		// Draw our game scene here 
		window.clear(); 

		//Draw our game scene here 
		window.draw(spritebackground); 

		// Show everthing we just drew 
		window.display(); 
	
	
	}
		
		
		
		
	return 0; 
}
