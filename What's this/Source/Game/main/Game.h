
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
	// 初始化游戏窗口(窗口名称输入，宽度输入，高度输入)
	static bool init(const char* title, int width, int height);
	// 释放游戏资源
	static void clean();
	// 更新数据
	static void update();
	// 渲染
	static void render();
	// 事件处理
	static void handleEvents();
};

