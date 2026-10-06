#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_801AA6DC();
void fn_801BF300();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AF4A8[];
extern char lbl_804AF4B8[];
extern char lbl_804B74F8[];
extern char lbl_804B755C[];
extern char lbl_804B817C[];
extern char lbl_805605C8[8];
extern void *lbl_805621F4;
extern void *lbl_80564EB8;
extern void *lbl_80564EBC;
void *fn_801BF06C();
void *fn_801BF0A8();
void fn_801BF118();
void fn_801BF140();
void *fn_801BF1AC();
void *fn_801BF1CC();
void *fn_801BF208();
void fn_801BF248();
void fn_801BF270();
void *fn_801BF2E0();
}
struct UnknownGenObject801BF0A8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801BF208_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801BF030(){
 if(!lbl_80564EB8) lbl_80564EB8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564EB8;
}
void *fn_801BF06C(){
 if(!lbl_80564EB8 || !(reinterpret_cast<unsigned int *>(lbl_80564EB8)[0x24/4]&4)) fn_801BF118();
 return lbl_80564EB8;
}
void *fn_801BF0A8(){
 UnknownGenObject801BF0A8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B755C;
 object.unknown00=lbl_804B74F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BF118(){
 fn_80066188((int)fn_801BF140);
}
void fn_801BF140(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EB8,(int)fn_8002907C,(int)fn_80024180,(int)fn_801BF1AC,(int)lbl_804AF4A8,20,(int)fn_801BF0A8,0,0,(int)lbl_805605C8);
}
void *fn_801BF1AC(){return fn_801BF06C();}
void *fn_801BF1CC(){
 if(!lbl_80564EBC || !(reinterpret_cast<unsigned int *>(lbl_80564EBC)[0x24/4]&4)) fn_801BF248();
 return lbl_80564EBC;
}
void *fn_801BF208(){
 UnknownGenObject801BF208_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B817C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BF248(){
 fn_80066188((int)fn_801BF270);
}
void fn_801BF270(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EBC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801BF2E0,(int)lbl_804AF4B8,16,(int)fn_801BF208,(int)fn_801BF300,0,0);
}
void *fn_801BF2E0(){return fn_801BF1CC();}
}
#pragma pop
