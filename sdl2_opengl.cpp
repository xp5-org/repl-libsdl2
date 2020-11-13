// found at https://gist.github.com/jordandee/94b187bcc51df9528a2f
// modified from original to change window size + start position


#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>
#include <GL/gl.h>


#define Width 256
#define Height 256

int main (int ArgCount, char **Args)
{

  uint32_t Flags = SDL_WINDOW_OPENGL;
  SDL_Window *Window = SDL_CreateWindow("OpenGL Test", 64, 64, Width, Height, Flags);
  assert(Window);
  SDL_GLContext Context = SDL_GL_CreateContext(Window);
  
  uint32_t Running = 1;
  uint32_t FullScreen = 0;
  while (Running)
  {
    SDL_Event Event;
    while (SDL_PollEvent(&Event))
    {
      if (Event.type == SDL_KEYDOWN)
      {
        switch (Event.key.keysym.sym)
        {
          case SDLK_ESCAPE:
            Running = 0;
            break;
        }
      }
      else if (Event.type == SDL_QUIT)
      {
        Running = 0;
      }
    }

    glViewport(0, 0, Width, Height);
    glClearColor(1.f, 0.f, 1.f, 0.f);
    glClear(GL_COLOR_BUFFER_BIT);

    SDL_GL_SwapWindow(Window);
  }
  return 0;
}