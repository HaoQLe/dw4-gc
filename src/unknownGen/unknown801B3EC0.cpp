#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void *fn_801B3D0C();
void fn_801B3D48();
void fn_801B41C0();
void fn_801BF938();
extern char lbl_804AD340[];
extern void *lbl_805621F4;
extern void *lbl_80564A10;
extern void *lbl_80564A14;
void fn_801B3EE8();
void *fn_801B3F50();
}
extern "C" {
void fn_801B3EC0(){
 fn_80066188((int)fn_801B3EE8);
}
void fn_801B3EE8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A10,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801B3F50,(int)lbl_804AD340,32,(int)fn_801B3D48,0,0,0);
}
void *fn_801B3F50(){return fn_801B3D0C();}
void *fn_801B3F70(void *object){
 fn_801B41C0();
 return fn_8006546C(lbl_80564A14,object);
}
void *fn_801B3FA8(){
 if(!lbl_80564A14) lbl_80564A14=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A14;
}
void *fn_801B3FE4(){
 if(!lbl_80564A14 || !(reinterpret_cast<unsigned int *>(lbl_80564A14)[0x24/4]&4)) fn_801B41C0();
 return lbl_80564A14;
}
}
#pragma pop
