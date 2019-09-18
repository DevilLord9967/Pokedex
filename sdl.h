#include"inc.h"
//***************************************To open PNG Image*************************//
const int SCREEN_WIDTH = 200;
const int SCREEN_HEIGHT = 200;

SDL_Window* window = NULL;

SDL_Renderer* renderer = NULL;
SDL_Texture* texture = NULL;

bool Initialize()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not be initialized! SDL_Error: %s\n", SDL_GetError());
		return false;
	}

	window = SDL_CreateWindow("Pokemon_image",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (window == NULL)
	{
		printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		return false;
	}

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (renderer == NULL)
	{
		printf("We were not able to create the renderer! SDL Error: %s\n", SDL_GetError());
		return false;
	}

	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

	int imgFlags = IMG_INIT_PNG;
	if (!(IMG_Init(imgFlags) & imgFlags))
	{
		printf("SDL_image could not be initialized! SDL_image Error: %s\n", IMG_GetError());
		return false;
	}

	return true;
}

void Close()
{
	SDL_DestroyWindow(window);
	window = NULL;

	SDL_Quit();
}

SDL_Texture* LoadTexture(std::string file)
{
	SDL_Texture* newTexture = NULL;

	SDL_Surface* loadedSurface = IMG_Load(file.c_str());

	if (loadedSurface == NULL)
		printf("Unable to load the image %s! SDL_image Error: %s\n", file.c_str(), IMG_GetError());
	else
	{
		newTexture = SDL_CreateTextureFromSurface(renderer, loadedSurface);

		if (newTexture == NULL)
			printf("Unable to create the texture from %s! SDL Error: %s\n", file.c_str(), SDL_GetError());

		SDL_FreeSurface(loadedSurface);
	}

	return newTexture;
}




int read_img(char name[])

{
	if (!Initialize())
	{
		printf("Could not initialize!\n");
		return -1;
	}

	texture = LoadTexture(name);
	if (texture == NULL)
	{
		printf("Failed to load the image %s\n",name);
		return -1;
	}

	 bool exit = false;
	SDL_Event e;

	while (!exit)
	{
		while (SDL_PollEvent(&e) != 0)
		{
			if (e.type == SDL_QUIT || e.key.keysym.sym == SDLK_ESCAPE)
				exit = true;
		}

		// Clear the renderer
		SDL_RenderClear(renderer);

		// Render the image
		SDL_RenderCopy(renderer, texture, NULL, NULL);

		// Show the final render
		SDL_RenderPresent(renderer);
	}



	Close();
	return 0;
}
