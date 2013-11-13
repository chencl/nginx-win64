nginx-win64
===========

nginx的代码来自于官方的hg库，地址为http://hg.nginx.org/nginx/
添加了vc2013(vc12)的项目文件及其它自定义文件, 也可以用vc2010(vc10)、vc2012(vc11)等打开, 更改编译平台工具集版本即可。

依赖库：
    |_openssl:  <=== http://www.openssl.org/
    |_zlib:     <=== http://www.zlib.net/ https://github.com/madler/zlib
    |_pcre:     <=== http://www.pcre.org/ svn://vcs.exim.org/pcre/code/trunk    
    |_libxml2:  <=== http://xmlsoft.org/
    |____|_iconv:    <=== http://www.gnu.org/software/libiconv/
    |_libxslt:  <=== http://xmlsoft.org/
    |____|_iconv:    <=== http://www.gnu.org/software/libiconv/
    |_GeoIP:    <=== http://dev.maxmind.com/geoip/legacy/downloadable/ https://github.com/maxmind/geoip-api-c
    |_gd-libgd: <=== http://libgd.bitbucket.org/ https://bitbucket.org/libgd/gd-libgd.git
    |____|_freetype2:<===http://www.freetype.org/freetype2/ http://git.savannah.gnu.org/cgit/freetype/freetype2.git/
    |____|_libjpeg-turbo:<===http://libjpeg-turbo.virtualgl.org/ svn://svn.code.sf.net/p/libjpeg-turbo/code/trunk
    |____|_libpng:   <=== http://www.libpng.org/pub/png/libpng.html git://git.code.sf.net/p/libpng/code
    |____|_libXpm:   <=== http://cgit.freedesktop.org/xorg/lib/libXpm
    |____|_pngquant: <=== git://github.com/pornel/pngquant.git

编译工具：Visual Studio、CMake
    