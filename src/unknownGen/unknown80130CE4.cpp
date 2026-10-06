#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80131060();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049BDBC[];
extern char lbl_804AABF8[];
extern char lbl_804AAC5C[];
extern char lbl_8055F4E4[8];
extern void *lbl_80563AE4;
extern void *lbl_80563AE8;
void *fn_80130D1C();
void *fn_80130D58();
void fn_80130DC8();
void fn_80130DF0();
void *fn_80130E5C();
}
struct UnknownGenObject80130D58_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80130CE4(void *object){
 fn_80130DC8();
 return fn_8006546C(lbl_80563AE4,object);
}
void *fn_80130D1C(){
 if(!lbl_80563AE4 || !(reinterpret_cast<unsigned int *>(lbl_80563AE4)[0x24/4]&4)) fn_80130DC8();
 return lbl_80563AE4;
}
void *fn_80130D58(){
 UnknownGenObject80130D58_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804AAC5C;
 object.unknown00=lbl_804AABF8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80130DC8(){
 fn_80066188((int)fn_80130DF0);
}
void fn_80130DF0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563AE4,(int)fn_8002907C,(int)fn_80024180,(int)fn_80130E5C,(int)lbl_8049BDBC,20,(int)fn_80130D58,0,0,(int)lbl_8055F4E4);
}
void *fn_80130E5C(){return fn_80130D1C();}
void *fn_80130E7C(void *object){
 fn_80131060();
 return fn_8006546C(lbl_80563AE8,object);
}
void *fn_80130EB4(){
 if(!lbl_80563AE8 || !(reinterpret_cast<unsigned int *>(lbl_80563AE8)[0x24/4]&4)) fn_80131060();
 return lbl_80563AE8;
}
}
#pragma pop
