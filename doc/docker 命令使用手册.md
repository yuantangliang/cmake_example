运行命令行
镜像管理

Image和容器
Image相当于类，是静态描述。容器相当于对象，是运行的实例。

image
docker image 查看docker镜像
docker ps 查看运行的容器
docker commit hash 提交容器为新的image docker commit -a=作者" -m="提交的描述信息" 容器 ID 要创建的目标容器名:标签


# 镜像管理
docker images
docker 镜像构建
docker build -t mxnet/python:cv2 .

# 删除镜像
docker rmi hello-world

# 容器操作
-p: 指定端口映射，格式为：主机(宿主)端口:容器端口 指定端口映射
-- name 为容器制定名称   -d 后台运行
-i  交互运行   -t 运行终端
docker run -it ubuntu /bin/bash

docker run --name mynginx -d nginx:latest
docker run   利用镜像创建新的容器
docker ps -a
docker start  启动新的容器
docker stop   停止容器
docker rm 删除容器



container 管理
docker container start [CONTAINER ID]
docker container ls --all 删除所有的处理终止状态的容器
docker container prune docker 删除id docker rm -f [CONTAINER ID]
