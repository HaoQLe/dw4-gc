#include <unknownGen.h>
#include <meta/igImageHistogram_LA.h>
#include <meta/igImageHistogram_RGB.h>
#include <meta/igImageHistogram_RGBA.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8018BC40(void *);
void fn_8018C2C8(void *,void *);
}
extern "C" {
void igImageHistogram_LA_virtual2C(int p0){
 fn_8018BC40((void *)p0);
 reinterpret_cast<Meta::igImageHistogram_LA *>((void *)p0)->_cmpntCount=(unsigned int)2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_LA *>((void *)p0)->_scale)+0)=(void *)2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_LA *>((void *)p0)->_scale)+4)=(void *)1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_LA *>((void *)p0)->_sigBits)+0)=(void *)8;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_LA *>((void *)p0)->_sigBits)+4)=(void *)1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_LA *>((void *)p0)->_logNum2)+0)=(void *)5;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_LA *>((void *)p0)->_logNum2)+4)=(void *)0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+20)=1;
 fn_8018C2C8((void *)p0,(void *)reinterpret_cast<Meta::igImageHistogram_LA *>((void *)p0)->_cmpntCount);
}
void igImageHistogram_RGB_virtual2C(int p0){
 fn_8018BC40((void *)p0);
 reinterpret_cast<Meta::igImageHistogram_RGB *>((void *)p0)->_cmpntCount=(unsigned int)3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGB *>((void *)p0)->_scale)+0)=(void *)2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGB *>((void *)p0)->_scale)+4)=(void *)3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGB *>((void *)p0)->_scale)+8)=(void *)1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGB *>((void *)p0)->_sigBits)+0)=(void *)5;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGB *>((void *)p0)->_sigBits)+4)=(void *)6;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGB *>((void *)p0)->_sigBits)+8)=(void *)5;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGB *>((void *)p0)->_logNum2)+0)=(void *)2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGB *>((void *)p0)->_logNum2)+4)=(void *)3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGB *>((void *)p0)->_logNum2)+8)=(void *)2;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+20)=1;
 fn_8018C2C8((void *)p0,(void *)reinterpret_cast<Meta::igImageHistogram_RGB *>((void *)p0)->_cmpntCount);
}
void igImageHistogram_RGBA_virtual2C(int p0){
 fn_8018BC40((void *)p0);
 reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_cmpntCount=(unsigned int)4;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_scale)+0)=(void *)2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_scale)+4)=(void *)3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_scale)+8)=(void *)1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_scale)+12)=(void *)1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_sigBits)+0)=(void *)5;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_sigBits)+4)=(void *)6;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_sigBits)+8)=(void *)5;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_sigBits)+12)=(void *)1;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_logNum2)+0)=(void *)2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_logNum2)+4)=(void *)3;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_logNum2)+8)=(void *)2;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_logNum2)+12)=(void *)0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+20)=1;
 fn_8018C2C8((void *)p0,(void *)reinterpret_cast<Meta::igImageHistogram_RGBA *>((void *)p0)->_cmpntCount);
}
}
#pragma pop
