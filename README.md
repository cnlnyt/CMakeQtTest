# QtPractice 项目介绍

The CMake for Qt5.14.2 Test. 这是一个用于练习 Qt 的多子项目仓库。

## 推送 Git 指令备忘

标准的推送流程分为 3 步（需要先提交现有的改动，再拉取合并，最后推送）：

### 第一步：暂存并提交本地代码

在终端（`PS D:\Qt\QtVsCodeTest>`）依次执行：

```bash
git add .
git commit -m "提交的描述信息"
```

### 第二步：拉取远程仓库最新代码并变基（合并）

```bash
git pull --rebase origin main
```

*(如果你这步遇到冲突提示 `CONFLICT`，就需要解决冲突后继续，如果没有报错就能接着往下执行。)*

### 第三步：推送到远程仓库

```bash
git push -u origin main
```