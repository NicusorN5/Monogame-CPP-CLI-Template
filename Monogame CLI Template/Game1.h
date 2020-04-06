#pragma once
using namespace Microsoft::Xna::Framework;
using namespace Microsoft::Xna::Framework::Graphics;

ref class Game1 : public Game
{
public:
	Game1();
	void Initialize() override;
	void LoadContent() override;
	void Update(GameTime^ gametime) override;
	void Draw(GameTime^ gametime) override;
	void UnloadContent() override;

private:
	SpriteBatch^ batch;
	GraphicsDeviceManager^ deviceManager;
};

