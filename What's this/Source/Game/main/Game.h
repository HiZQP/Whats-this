
#include <string>
#pragma once
class Game
{
private:
	static bool game_isRunning;
	static int main_windowWidth;
	static int main_windowHeight;
	static const char* main_windowTitle;
public:
	Game();
	~Game();
	// ��ʼ����Ϸ����(�����������룬������룬�߶�����)
	static bool init(const char* title, int width, int height);
	// �ͷ���Ϸ��Դ
	static void clean();
	// ��������
	static void update();
	// ��Ⱦ
	static void render();
	// �¼�����
	static void handleEvents();
};

