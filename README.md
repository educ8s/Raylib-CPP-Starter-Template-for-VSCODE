# Raylib C++ Starter Template for VS Code

![Language](https://img.shields.io/badge/language-C%2B%2B-brightgreen)
![Raylib](https://img.shields.io/badge/raylib-4%20%7C%205%20%7C%206-00d4aa)
![Platform](https://img.shields.io/badge/platform-Windows%2010%20%7C%2011-blue)
![Editor](https://img.shields.io/badge/editor-VS%20Code-007ACC)

A minimal C++ project scaffold for Visual Studio Code on Windows — includes a bouncing ball demo and zero boilerplate friction.

<p align="center">
  <a href="https://www.youtube.com/watch?v=PaAcVk5jUd8">
    <img src="preview.jpg" alt="Preview of the bouncing ball demo — click to watch tutorial" width="800">
  </a>
</p>

<p align="center">
  <a href="https://www.youtube.com/watch?v=PaAcVk5jUd8">
    <img src="https://img.shields.io/badge/▶%20Watch%20the%20Video%20Tutorial-FF0000?style=for-the-badge&logo=youtube&logoColor=white" alt="Watch the Video Tutorial on YouTube">
  </a>
</p>

---

## Get started in 3 steps

**1.** Double-click `main.code-workspace` to open the project in VS Code.

**2.** In the Explorer panel, open `main.cpp`.

**3.** Press `F5` to compile and run.

---

## What's inside

| | Feature | Details |
|---|---|---|
| 🎱 | **Bouncing ball demo** | Ready-to-run example using raylib's core 2D drawing API |
| ⚙️ | **VS Code tasks** | Pre-configured build tasks — no manual setup required |
| ✅ | **Tested on Win 10/11** | Works with raylib 4, 5, and 6 out of the box |

---

## Quick look

```cpp
#include <raylib.h>

int main()
{
    InitWindow(800, 450, "My first RAYLIB program!");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(DARKGREEN);
            DrawCircle(400, 225, 20, RED);
        EndDrawing();
    }

    CloseWindow();
}
```

---

## Resources

🎥 [Video Tutorial on YouTube](https://www.youtube.com/watch?v=PaAcVk5jUd8)
&nbsp;&nbsp;|&nbsp;&nbsp;
📺 [My YouTube Channel](https://www.youtube.com/channel/UC3ivOTE5EgpmF2DHLBmWIWg)
&nbsp;&nbsp;|&nbsp;&nbsp;
🌍 [My Website](https://www.programmingwithnick.com)
