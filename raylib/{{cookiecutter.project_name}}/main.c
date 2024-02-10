#include "libraries/simclist/simclist.h"
#include <raylib.h>
#include <stdio.h>

const int screen_width = 1920;
const int screen_height = 1080;

int main() {
  InitWindow(screen_width, screen_height, "{{cookiecutter.project_name}}");
  ToggleFullscreen();
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
	ClearBackground(BLACK);
    EndDrawing();
	}
}
