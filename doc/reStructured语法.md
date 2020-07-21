

# 环境搭建
- [directives](https://www.sphinx-doc.org/en/master/usage/restructuredtext/directives.html)

directive 指令

+-------+-------------------------------+
| ".. " | directive type "::" directive |
+-------+ block                         |
        |                               |
        +-------------------------------+
目录要点：
- 上面要空行
- 连接文件要有标题

[role](https://www.sphinx-doc.org/en/master/usage/restructuredtext/roles.html#cross-referencing-syntax)

# 主题

==============================================

# 参考资料
  - [restruct doc](https://www.sphinx-doc.org/en/master/usage/restructuredtext/index.html)
  - [reStructuredText quickstart](https://www.jianshu.com/p/1885d5570b37)
  - [reStructuredText 指令](https://docutils.sourceforge.io/docs/ref/rst/directives.html)
  - [shpinx 中文指南](http://doc.yonyoucloud.com/doc/zh-sphinx-doc/contents.html)


# 本地部署安装readthedoc


sudo apt-get install docker.io


配置docker register mirror 加速器，强烈建议配置[阿里加速器](https://cr.console.aliyun.com/cn-hangzhou/instances/mirrors)（需要注册），就是快。

# sudo gedit /etc/docker/daemon.json
{
"registry-mirrors": ["https://registry.docker-cn.com"]
}


sudo docker info 查看docker加速器是否设置成功
sudo systemctl daemon-reload
sudo systemctl restart docker.service



从头编译安装readthedoc太复杂，这里我们使用docker安装
sudo docker run -d --name ReadTheDocs -p 9000:9000 shaker/readthedocs

sudo docker start ReadTheDocs
sudo docker stop ReadTheDocs



[install readthedoc](https://docs.readthedocs.io/en/stable/development/install.html)





