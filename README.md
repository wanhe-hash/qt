# Qt 练习工程合集

用 Qt 5.14.1 写的桌面小练习，按工程分目录存放。每个目录是一个**独立可运行的 Qt Creator 项目**，互不依赖，可以单独打开、单独编译、单独运行。

## 环境

| 项 | 值 |
|---|---|
| Qt | 5.14.1 |
| 编译器 | MinGW 64-bit（Qt 自带工具链） |
| 构建套件 (Kit) | `Desktop_Qt_5_14_1_MinGW_64_bit` |
| C++ 标准 | C++11（各工程 `.pro` 中 `CONFIG += c++11`） |
| UI 技术 | Qt Widgets（`QWidget` / `QMainWindow`） |

## 怎么跑起来

### Qt Creator（推荐）

1. 文件 → 打开文件或项目 → 选某个工程的 `.pro`，例如 `untitled5/untitled5.pro`
2. 构建套件选 `Desktop_Qt_5_14_1_MinGW_64_bit`
3. `Ctrl+B` 编译，`Ctrl+R` 运行

> 每个工程的 `.pro` 都写了 `CONFIG += c++11`，直接打开即可，无需额外配置。

### 命令行

```bash
# 需要把 Qt 的 mingw bin 与 Qt bin 加进 PATH
cd untitled5
qmake untitled5.pro
mingw32-make
./debug/untitled5.exe
```

## 目录结构

每个工程是一个标准 Qt Widgets 项目：

```
untitledN/
├── .gitignore          # Qt 模板忽略规则（屏蔽 .pro.user、编译产物等）
├── main.cpp            # 程序入口
├── widget.h            # 界面类声明
├── widget.cpp          # 界面类实现
├── widget.ui           # Qt Designer 界面文件
├── untitledN.pro       # qmake 工程文件
└── *.qrc               # 资源文件（部分工程有）
```

后三个工程（`untitled8` / `untitled9` / `untitled10`）改用 **QMainWindow** 结构，对应文件名为 `mainwindow.h` / `mainwindow.cpp` / `mainwindow.ui`。

## 工程清单

共 **27** 个工程。

### QWidget 结构（24 个）

| 工程 | 备注 |
|---|---|
| `untitled` | 首个工程 |
| `untitled_1` | |
| `untitled1` | |
| `untitled1_2` | 序号有跳空，缺失编号对应的工程未纳入本仓库 |
| `untitled1_3` | |
| `untitled1_5` ~ `untitled1_9` | |
| `untitled1_10` | 带 `resource.qrc` 资源文件 |
| `untitled1_11` ~ `untitled1_16` | |
| `untitled2` / `untitled2_1` | |
| `untitled3` ~ `untitled7` | |

### QMainWindow 结构（3 个）

| 工程 | 备注 |
|---|---|
| `untitled8` | |
| `untitled9` | |
| `untitled10` | 带 `1.qrc` 资源文件（当前为空） |

## 仓库约定

- **不提交构建产物**：`build-*` 影子构建目录、`.pro.user`、`.exe` / `.dll` / `Makefile` 等一律忽略
- **换行统一**：`.gitattributes` 声明 `* text=auto`，仓库内存 LF，检出时按平台自动转换（Windows 上本地是 CRLF，属正常现象）
- **提交规范**：遵循 [Conventional Commits](https://www.conventionalcommits.org/)，例如 `feat: add untitled8 Qt project`、`chore: add Qt .gitignore`
