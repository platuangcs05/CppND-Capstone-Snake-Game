#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"

int main() {
  constexpr std::size_t kFramesPerSecond{50};
  constexpr std::size_t kMsPerFrame{900 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{600};
  constexpr std::size_t kScreenHeight{600};
  constexpr std::size_t kGridWidth{28};
  constexpr std::size_t kGridHeight{28};

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight);
  game.Run(controller, renderer, kMsPerFrame);
  std::cout << "Have Fun!!!\n";
  std::cout << "Game has terminated successfully!\n";
  std::cout << "LargestScore: " << game.GetLargestScore() << "\n";
  std::cout << "Score: " << game.GetScore() << "\n";
  std::cout << "Size: " << game.GetSize() << "\n";
  return 0;
}