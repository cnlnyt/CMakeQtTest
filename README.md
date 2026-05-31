The CMake for Qt5.14.2 Test.
推送git指令
git pull --rebase origin main
git push -u origin main

标准的推送流程分为 3 步（你需要先提交现有的改动，再拉取合并，最后推上去）：
第一步：暂存并提交你本地的代码
在终端（PS D:\Qt\QtVsCodeTest>）依次执行：
git add .
git commit -m "重构为多子项目结构，并增加 hello2 资源加载与 UI 示例"

第二步：拉取远程仓库最新代码并变基（合并）
git pull --rebase origin main
（如果你这步遇到冲突提示 CONFLICT，就需要解决冲突后继续，如果没有报错就能接着往下执行。）

第三步：推送到远程仓库
git push -u origin main
你可以直接把这三段命令复制去终端一行行执行。如果报错了，可以随时