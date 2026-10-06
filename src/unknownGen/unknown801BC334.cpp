#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801B76A8();
void *fn_801BBBF0();
void fn_801BC980();
void *fn_801BCB1C();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AEE28[];
extern char lbl_804AEE50[];
extern char lbl_804B4038[];
extern char lbl_804B459C[];
extern char lbl_804B78A4[];
extern char lbl_804B7908[];
extern char lbl_8056051C[8];
extern char lbl_80560524[4];
extern char lbl_80560528[4];
extern char lbl_8056052C[4];
extern char lbl_80560530[4];
extern char lbl_80560534[8];
extern void *lbl_805621F4;
extern void *lbl_80564DD8;
extern void *lbl_80564DE0;
extern void *lbl_80564DE4;
void *fn_801BC334();
void *fn_801BC370();
void fn_801BC4D8();
void fn_801BC500();
void *fn_801BC574();
void fn_801BC594();
void *fn_801BC658();
void *fn_801BC694();
void fn_801BC704();
void fn_801BC72C();
void *fn_801BC798();
}
struct UnknownGenRoot801BC370 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BC370(){fn_8006665C(this);}
};
struct UnknownGenObject801BC370_0 : UnknownGenRoot801BC370 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BC370_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BC370_1 : UnknownGenObject801BC370_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BC370_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BC370 : UnknownGenObject801BC370_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BC370(){unknown00=lbl_804B459C;}
};
struct UnknownGenObject801BC694_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801BC334(){
 if(!lbl_80564DD8 || !(reinterpret_cast<unsigned int *>(lbl_80564DD8)[0x24/4]&4)) fn_801BC4D8();
 return lbl_80564DD8;
}
void *fn_801BC370(){
 UnknownGenObject801BC370 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B459C;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BC4D8(){
 fn_80066188((int)fn_801BC500);
}
void fn_801BC500(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DD8,(int)fn_801B76A8,(int)fn_801BBBF0,(int)fn_801BC574,(int)lbl_804AEE28,32,(int)fn_801BC370,(int)fn_801BC594,0,(int)lbl_8056051C);
}
void *fn_801BC574(){return fn_801BC334();}
void fn_801BC594(){
 void *value0=lbl_80564DD8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560524,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801BCB1C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_80560528,lbl_8056052C,lbl_80560530,value1);
}
void *fn_801BC61C(){
 if(!lbl_80564DE0) lbl_80564DE0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DE0;
}
void *fn_801BC658(){
 if(!lbl_80564DE0 || !(reinterpret_cast<unsigned int *>(lbl_80564DE0)[0x24/4]&4)) fn_801BC704();
 return lbl_80564DE0;
}
void *fn_801BC694(){
 UnknownGenObject801BC694_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7908;
 object.unknown00=lbl_804B78A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BC704(){
 fn_80066188((int)fn_801BC72C);
}
void fn_801BC72C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564DE0,(int)fn_8002907C,(int)fn_80024180,(int)fn_801BC798,(int)lbl_804AEE50,20,(int)fn_801BC694,0,0,(int)lbl_80560534);
}
void *fn_801BC798(){return fn_801BC658();}
void *fn_801BC7B8(){
 if(!lbl_80564DE4) lbl_80564DE4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564DE4;
}
void *fn_801BC7F4(){
 if(!lbl_80564DE4 || !(reinterpret_cast<unsigned int *>(lbl_80564DE4)[0x24/4]&4)) fn_801BC980();
 return lbl_80564DE4;
}
}
#pragma pop
