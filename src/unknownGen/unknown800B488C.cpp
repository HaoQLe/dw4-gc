#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void *fn_800AD708();
void *fn_800B47E4();
void fn_800B4820();
void fn_800B4CE8();
void fn_800B88AC();
void *fn_800C1444(int);
void fn_800CE17C();
extern char lbl_80479128[];
extern char lbl_80479140[];
extern char lbl_80479154[];
extern char lbl_8047BFA4[];
extern char lbl_8047C024[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E398[8];
extern char lbl_8055E3A0[8];
extern char lbl_8055E3A8[8];
extern char lbl_8055E3B0[8];
extern char lbl_8055E3B8[4];
extern char lbl_8055E3BC[4];
extern char lbl_8055E3C0[4];
extern char lbl_8055E3C4[4];
extern char lbl_8055E3C8[4];
extern void *lbl_80562788;
extern void *lbl_80562794;
extern void *lbl_8056279C;
void fn_800B48B4();
void *fn_800B4924();
void fn_800B4944();
void *fn_800B49C4();
void *fn_800B4A00();
void fn_800B4A58();
void fn_800B4A80();
void *fn_800B4AF0();
void fn_800B4B10();
void *fn_800B4B9C();
void *fn_800B4BD8();
void fn_800B4C30();
void fn_800B4C58();
void *fn_800B4CC8();
}
struct UnknownGenObject800B4A00_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B4BD8_0 {
 void *unknown00;
 char unknown04[84];
};
extern "C" {
void fn_800B488C(){
 fn_80066188((int)fn_800B48B4);
}
void fn_800B48B4(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562788,(int)fn_800B88AC,(int)fn_800AD708,(int)fn_800B4924,(int)lbl_80479128,80,(int)fn_800B4820,(int)fn_800B4944,0,0);
}
void *fn_800B4924(){return fn_800B47E4();}
void fn_800B4944(){
 void *value0=lbl_80562788;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E398,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C1444;
 fn_800659C0(value0,lbl_8055E3A0,lbl_8055E3A8,lbl_8055E3B0,value1);
}
void *fn_800B49C4(){
 if(!lbl_80562794 || !(reinterpret_cast<unsigned int *>(lbl_80562794)[0x24/4]&4)) fn_800B4A58();
 return lbl_80562794;
}
void *fn_800B4A00(){
 UnknownGenObject800B4A00_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BFA4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B4A58(){
 fn_80066188((int)fn_800B4A80);
}
void fn_800B4A80(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562794,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B4AF0,(int)lbl_80479140,16,(int)fn_800B4A00,(int)fn_800B4B10,0,0);
}
void *fn_800B4AF0(){return fn_800B49C4();}
void fn_800B4B10(){
 void *value0=lbl_80562794;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E3B8,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E3C8);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CE17C;
 fn_800659C0(value0,lbl_8055E3BC,lbl_8055E3C0,lbl_8055E3C4,value1);
}
void *fn_800B4B9C(){
 if(!lbl_8056279C || !(reinterpret_cast<unsigned int *>(lbl_8056279C)[0x24/4]&4)) fn_800B4C30();
 return lbl_8056279C;
}
void *fn_800B4BD8(){
 UnknownGenObject800B4BD8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C024;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B4C30(){
 fn_80066188((int)fn_800B4C58);
}
void fn_800B4C58(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056279C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B4CC8,(int)lbl_80479154,84,(int)fn_800B4BD8,(int)fn_800B4CE8,0,0);
}
void *fn_800B4CC8(){return fn_800B4B9C();}
}
#pragma pop
