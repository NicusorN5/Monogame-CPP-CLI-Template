#include "Game1.h"

Game1::Game1()
{
	deviceManager = gcnew GraphicsDeviceManager(this);
}

void Game1::Initialize()
{
	this->Window->Title = L"Monogame C++/CLI Template";
}

void Game1::LoadContent()
{
	batch = gcnew SpriteBatch(GraphicsDevice);
}

void Game1::Update(GameTime^ gametime)
{
	
}

void Game1::Draw(GameTime^ gametime)
{
	GraphicsDevice->Clear(Color::CornflowerBlue);
}

void Game1::UnloadContent()
{
	
}
