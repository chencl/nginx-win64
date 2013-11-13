nginx-win64
===========

nginx的代码来自于官方的hg库，地址为http://hg.nginx.org/nginx/
添加了vc2013(vc12)的项目文件及其它自定义文件, 也可以用vc2010(vc10)、vc2012(vc11)等打开, 更改编译平台工具集版本即可。

###依赖库：
    |_openssl:  <=== http://www.openssl.org/    <br/>
    |_zlib:     <=== http://www.zlib.net/ https://github.com/madler/zlib    <br/>
    |_pcre:     <=== http://www.pcre.org/ svn://vcs.exim.org/pcre/code/trunk    <br/> 
    |_libxml2:  <=== http://xmlsoft.org/    <br/>
    |____|_iconv:    <=== http://www.gnu.org/software/libiconv/    <br/>
    |_libxslt:  <=== http://xmlsoft.org/    <br/>
    |____|_iconv:    <=== http://www.gnu.org/software/libiconv/    <br/>
    |_GeoIP:    <=== http://dev.maxmind.com/geoip/legacy/downloadable/ https://github.com/maxmind/geoip-api-c    <br/>
    |_gd-libgd: <=== http://libgd.bitbucket.org/ https://bitbucket.org/libgd/gd-libgd.git    <br/>
    |____|_freetype2:<===http://www.freetype.org/freetype2/ http://git.savannah.gnu.org/cgit/freetype/freetype2.git/    <br/>
    |____|_libjpeg-turbo:<===http://libjpeg-turbo.virtualgl.org/ svn://svn.code.sf.net/p/libjpeg-turbo/code/trunk    <br/>
    |____|_libpng:   <=== http://www.libpng.org/pub/png/libpng.html git://git.code.sf.net/p/libpng/code    <br/>
    |____|_libXpm:   <=== http://cgit.freedesktop.org/xorg/lib/libXpm    <br/>
    |____|_pngquant: <=== git://github.com/pornel/pngquant.git    <br/>

###编译工具：Visual Studio、CMake
    