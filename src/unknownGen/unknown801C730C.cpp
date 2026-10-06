#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_80035C70();
void fn_80035DA8();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801C74D8();
extern char lbl_80472FA0[];
extern char lbl_804748A0[];
extern char lbl_80474900[];
extern char lbl_804B143C[];
extern char lbl_804B6CF4[];
extern void *lbl_805621F4;
extern void *lbl_805652CC;
void *fn_801C7380();
void *fn_801C73BC();
void fn_801C7420();
void fn_801C7448();
void *fn_801C74B8();
}
struct UnknownGenObject801C73BC_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801C730C(void *object){
 fn_801C7420();
 return fn_8006546C(lbl_805652CC,object);
}
void *fn_801C7344(){
 if(!lbl_805652CC) lbl_805652CC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805652CC;
}
void *fn_801C7380(){
 if(!lbl_805652CC || !(reinterpret_cast<unsigned int *>(lbl_805652CC)[0x24/4]&4)) fn_801C7420();
 return lbl_805652CC;
}
void *fn_801C73BC(){
 UnknownGenObject801C73BC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80474900;
 object.unknown00=lbl_804748A0;
 object.unknown00=lbl_804B6CF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C7420(){
 fn_80066188((int)fn_801C7448);
}
void fn_801C7448(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805652CC,(int)fn_80035DA8,(int)fn_80035C70,(int)fn_801C74B8,(int)lbl_804B143C,24,(int)fn_801C73BC,(int)fn_801C74D8,0,0);
}
void *fn_801C74B8(){return fn_801C7380();}
}
#pragma pop
