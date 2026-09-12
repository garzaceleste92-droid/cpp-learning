# AGENTS.md

## Project context
This repository is a small C++ learning workspace with standalone chapter exercise files such as `Chapter1.cpp` and `Chapter2.cpp`.

## Operating rules for AI coding agents
- Do not propose code edits, rewrites, or suggestions inside the user's current file unless the user explicitly asks to modify it.
- Do not auto-insert code into existing examples or chapter files.
- If the user is learning, prefer conceptual explanations, debugging guidance, or small example snippets outside the repo unless they ask for a direct edit.
- Ask before changing any file, adding new code, or compiling/running a project.
- Keep explanations minimal, educational, and focused on the user's question.

## Project conventions
- Treat these files as study examples rather than production code.
- Keep solutions easy to follow and beginner-friendly.
- Prefer teaching and reasoning over unsolicited enhancements.

## Validation guidance
If the user asks to verify a C++ program, use the compile-and-run flow below:

```bash
g++ ChapterX.cpp -o ChapterX
./ChapterX
```

Replace `ChapterX` with the actual chapter filename when needed.
