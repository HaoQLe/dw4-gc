#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void *fn_80024180();
void fn_8002907C();
void *fn_8002942C();
void fn_80029D58();
void fn_8002C9AC();
void *fn_8003003C();
void fn_80032D80();
void *fn_800584BC();
void *fn_800584E8();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_80465058[];
extern char lbl_80465070[];
extern char lbl_80465084[];
extern char lbl_80471F20[];
extern char lbl_80472EF4[];
extern char lbl_80472FA0[];
extern char lbl_80475E9C[];
extern char lbl_80475EF8[];
extern char lbl_80475F5C[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D2FC[8];
extern char lbl_8055D304[8];
extern char lbl_8055D30C[8];
extern char lbl_8055D314[8];
extern char lbl_8055D31C[8];
extern char lbl_8055D324[8];
extern void *lbl_80561904;
extern void *lbl_80561908;
extern void *lbl_80561914;
void *fn_8002C448();
void *fn_8002C484();
void fn_8002C4F4();
void fn_8002C51C();
void *fn_8002C588();
void *fn_8002C5E0();
void *fn_8002C61C();
void fn_8002C6B4();
void fn_8002C6DC();
void *fn_8002C74C();
void fn_8002C76C();
void *fn_8002C80C();
void *fn_8002C848();
void fn_8002C8F0();
void fn_8002C918();
void *fn_8002C98C();
}
struct UnknownGenObject8002C484_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8002C61C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002C61C(){fn_8006665C(this);}
};
struct UnknownGenObject8002C61C_0 : UnknownGenRoot8002C61C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002C61C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002C61C : UnknownGenObject8002C61C_0 {
 char unknown0C[20];
 inline ~UnknownGenObject8002C61C(){unknown00=lbl_80475E9C;}
};
struct UnknownGenRoot8002C848 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002C848(){fn_8006665C(this);}
};
struct UnknownGenObject8002C848_0 : UnknownGenRoot8002C848 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002C848_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002C848_1 : UnknownGenObject8002C848_0 {
 inline ~UnknownGenObject8002C848_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject8002C848 : UnknownGenObject8002C848_1 {
 char unknown0C[52];
 inline ~UnknownGenObject8002C848(){unknown00=lbl_80471F20;}
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
 UnknownGenObject8002C484_0 object;
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
void *fn_8002C61C(){
 UnknownGenObject8002C61C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80475E9C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002C6B4(){
 fn_80066188((int)fn_8002C6DC);
}
void fn_8002C6DC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561908,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_8002C74C,(int)lbl_80465070,20,(int)fn_8002C61C,(int)fn_8002C76C,0,0);
}
void *fn_8002C74C(){return fn_8002C5E0();}
void fn_8002C76C(){
 void *value0=lbl_80561908;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D304,2);
 fn_800659C0(value0,lbl_8055D30C,lbl_8055D314,lbl_8055D31C,value1);
}
void *fn_8002C7D4(void *object){
 fn_8002C8F0();
 return fn_8006546C(lbl_80561914,object);
}
void *fn_8002C80C(){
 if(!lbl_80561914 || !(reinterpret_cast<unsigned int *>(lbl_80561914)[0x24/4]&4)) fn_8002C8F0();
 return lbl_80561914;
}
void *fn_8002C848(){
 UnknownGenObject8002C848 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_80471F20;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002C8F0(){
 fn_80066188((int)fn_8002C918);
}
void fn_8002C918(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561914,(int)fn_80032D80,(int)fn_8002942C,(int)fn_8002C98C,(int)lbl_80465084,56,(int)fn_8002C848,(int)fn_8002C9AC,0,(int)lbl_8055D324);
}
void *fn_8002C98C(){return fn_8002C80C();}
}
#pragma pop
