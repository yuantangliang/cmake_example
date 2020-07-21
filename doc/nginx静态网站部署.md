1. 安装nginx
```
sudo apt-get install nginx
```
安装完成之后，访问 http://localhost/ 就可以看到nginx欢迎页面。

2. 配置nginx
```
sudo gedit /etc/nginx/sites-enabled/default
```

将root项目修改为自己的静态资源的文件夹

3. 校验并重启nginx

nginx
校验nginx配置文件是否有问题
nginx -t

重新加载nginx 配置
```
nginx -s reload
```

```
nginx -s stop
```
4. 再次http://localhost/ 就可以看到网站变为自己设计的静态网站了。


// 目录匹配

  2.try_files的语法解释：(先贴出官方的解释，楼主再解释下)

Checks the existence of files in the specified order and uses the first found file for request processing; the processing is performed in the current context. The path to a file is constructed from the fileparameter according to the root and alias directives. It is possible to check directory’s existence by specifying a slash at the end of a name, e.g. “$uri/”. If none of the files were found, an internal redirect to the uri specified in the last parameter is made.

　　关键点1：按指定的file顺序查找存在的文件，并使用第一个找到的文件进行请求处理

　　关键点2：查找路径是按照给定的root或alias为根路径来查找的

　　关键点3：如果给出的file都没有匹配到，则重新请求最后一个参数给定的uri，就是新的location匹配

　　关键点4：如果是格式2，如果最后一个参数是 = 404 ，若给出的file都没有匹配到，则最后返回404的响应码

 3.举例说明：


location /images/ {
    root /opt/html/;
    try_files $uri   $uri/  /images/default.gif;
}
比如 请求 127.0.0.1/images/test.gif 会依次查找 1.文件/opt/html/images/test.gif   2.文件夹 /opt/html/images/test.gif/下的index文件  3. 请求127.0.0.1/images/default.gif

4.其他注意事项
1.try-files 如果不写上 $uri/，当直接访问一个目录路径时，并不会去匹配目录下的索引页  即 访问127.0.0.1/images/ 不会去访问  127.0.0.1/images/index.html


