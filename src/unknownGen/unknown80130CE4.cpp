#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void fn_80131120();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049BDBC[];
extern char lbl_8049BDDC[];
extern char lbl_8049BDF4[];
extern char lbl_804AAB9C[];
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
void *fn_80130EB4();
void *fn_80130EF0();
void fn_80131060();
void fn_80131088();
void *fn_80131100();
}
struct UnknownGenObject80130D58_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80130EF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80130EF0(){fn_8006665C(this);}
};
struct UnknownGenObject80130EF0 : UnknownGenRoot80130EF0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[4];
 inline ~UnknownGenObject80130EF0(){unknown00=lbl_804AAB9C;}
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
void *fn_80130EF0(){
 UnknownGenObject80130EF0 object;
 object.unknown00=lbl_804AAB9C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80131060(){
 fn_80066188((int)fn_80131088);
}
void fn_80131088(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563AE8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80131100,(int)lbl_8049BDF4,28,(int)fn_80130EF0,(int)fn_80131120,0,(int)lbl_8049BDDC);
}
void *fn_80131100(){return fn_80130EB4();}
}
#pragma pop
