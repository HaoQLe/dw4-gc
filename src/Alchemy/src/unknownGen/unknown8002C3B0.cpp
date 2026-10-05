#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024180();
void fn_8002907C();
void fn_8002C6B4();
void *fn_8003003C();
void *fn_800584BC();
void *fn_800584E8();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80465058[];
extern char lbl_80472FA0[];
extern char lbl_80475EF8[];
extern char lbl_80475F5C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D2FC[8];
extern void *lbl_80561904;
extern void *lbl_80561908;
void *fn_8002C448();
void *fn_8002C484();
void fn_8002C4F4();
void fn_8002C51C();
void *fn_8002C588();
}
struct UnknownGenObject8002C484 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8002C3B0(){return fn_8003003C();}
void *fn_8002C3D0(){return fn_800584BC();}
void *fn_8002C3F0(){return fn_800584E8();}
void *fn_8002C410(void *object){
 fn_8002C4F4();
 return fn_8006546C(lbl_80561904,object);
}
void *fn_8002C448(){
 if(!lbl_80561904 || !(reinterpret_cast<unsigned int *>(lbl_80561904)[0x24/4]&4)) fn_8002C4F4();
 return lbl_80561904;
}
void *fn_8002C484(){
 UnknownGenObject8002C484 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80475F5C;
 object.unknown00=lbl_80475EF8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002C4F4(){
 fn_80066188((int)fn_8002C51C);
}
void fn_8002C51C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561904,(int)fn_8002907C,(int)fn_80024180,(int)fn_8002C588,(int)lbl_80465058,20,(int)fn_8002C484,0,0,(int)lbl_8055D2FC);
}
void *fn_8002C588(){return fn_8002C448();}
void *fn_8002C5A8(void *object){
 fn_8002C6B4();
 return fn_8006546C(lbl_80561908,object);
}
void *fn_8002C5E0(){
 if(!lbl_80561908 || !(reinterpret_cast<unsigned int *>(lbl_80561908)[0x24/4]&4)) fn_8002C6B4();
 return lbl_80561908;
}
}
#pragma pop
