#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *fn_80029E64(void *);
void fn_80033A14();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void fn_80114ED4();
extern char lbl_80472FA0[];
extern char lbl_804956FC[];
extern char lbl_80496E68[];
extern char lbl_80496EC8[];
extern void *lbl_805621F4;
extern void *lbl_80563844;
void *fn_80114D88();
void *fn_80114DC4();
void fn_80114E1C();
void fn_80114E44();
void *fn_80114EB4();
}
struct UnknownGenObject80114DC4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80114D4C(){
 if(!lbl_80563844) lbl_80563844=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563844;
}
void *fn_80114D88(){
 if(!lbl_80563844 || !(reinterpret_cast<unsigned int *>(lbl_80563844)[0x24/4]&4)) fn_80114E1C();
 return lbl_80563844;
}
void *fn_80114DC4(){
 UnknownGenObject80114DC4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80496EC8;
 object.unknown00=lbl_80496E68;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80114E1C(){
 fn_80066188((int)fn_80114E44);
}
void fn_80114E44(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563844,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80114EB4,(int)lbl_804956FC,20,(int)fn_80114DC4,(int)fn_80114ED4,0,0);
}
void *fn_80114EB4(){return fn_80114D88();}
}
#pragma pop
