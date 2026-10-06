#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC0B8();
void *fn_800AC294();
void fn_800B7E74();
void *fn_800BB448();
void fn_800BB858();
extern char lbl_80479844[];
extern char lbl_80479864[];
extern char lbl_80479880[];
extern char lbl_8047C960[];
extern char lbl_8047C9E0[];
extern char lbl_8047CA64[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E4D8[8];
extern char lbl_8055E4E0[4];
extern char lbl_8055E4E4[4];
extern char lbl_8055E4E8[4];
extern char lbl_8055E4EC[4];
extern char lbl_8055E4F0[4];
extern char lbl_8055E4F4[4];
extern char lbl_8055E4F8[4];
extern char lbl_8055E4FC[4];
extern void *lbl_805621F4;
extern void *lbl_805628F0;
extern void *lbl_805628F8;
extern void *lbl_80562900;
void *fn_800B794C();
void *fn_800B7988();
void fn_800B7A1C();
void fn_800B7A44();
void *fn_800B7AB8();
void fn_800B7AD8();
void *fn_800B7B60();
void *fn_800B7B9C();
void fn_800B7BF4();
void fn_800B7C1C();
void *fn_800B7C8C();
void fn_800B7CAC();
void *fn_800B7D28();
void *fn_800B7D64();
void fn_800B7DBC();
void fn_800B7DE4();
void *fn_800B7E54();
}
struct UnknownGenRoot800B7988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B7988(){fn_8006665C(this);}
};
struct UnknownGenObject800B7988 : UnknownGenRoot800B7988 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B7988(){unknown00=lbl_8047C960;}
};
struct UnknownGenObject800B7B9C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B7D64_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B78D8(void *object){
 fn_800B7A1C();
 return fn_8006546C(lbl_805628F0,object);
}
void *fn_800B7910(){
 if(!lbl_805628F0) lbl_805628F0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805628F0;
}
void *fn_800B794C(){
 if(!lbl_805628F0 || !(reinterpret_cast<unsigned int *>(lbl_805628F0)[0x24/4]&4)) fn_800B7A1C();
 return lbl_805628F0;
}
void *fn_800B7988(){
 UnknownGenObject800B7988 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047C960;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B7A1C(){
 fn_80066188((int)fn_800B7A44);
}
void fn_800B7A44(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628F0,(int)fn_800BB858,(int)fn_800AC0B8,(int)fn_800B7AB8,(int)lbl_80479844,16,(int)fn_800B7988,(int)fn_800B7AD8,0,(int)lbl_8055E4D8);
}
void *fn_800B7AB8(){return fn_800B794C();}
void fn_800B7AD8(){
 void *value0=lbl_805628F0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E4E0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800BB448();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055E4E4,lbl_8055E4E8,lbl_8055E4EC,value1);
}
void *fn_800B7B60(){
 if(!lbl_805628F8 || !(reinterpret_cast<unsigned int *>(lbl_805628F8)[0x24/4]&4)) fn_800B7BF4();
 return lbl_805628F8;
}
void *fn_800B7B9C(){
 UnknownGenObject800B7B9C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C9E0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B7BF4(){
 fn_80066188((int)fn_800B7C1C);
}
void fn_800B7C1C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805628F8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B7C8C,(int)lbl_80479864,16,(int)fn_800B7B9C,(int)fn_800B7CAC,0,0);
}
void *fn_800B7C8C(){return fn_800B7B60();}
void fn_800B7CAC(){
 void *meta=lbl_805628F8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055E4F0,1);
 fn_8003EC68(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055E4F4,lbl_8055E4F8,lbl_8055E4FC,field);
}
void *fn_800B7D28(){
 if(!lbl_80562900 || !(reinterpret_cast<unsigned int *>(lbl_80562900)[0x24/4]&4)) fn_800B7DBC();
 return lbl_80562900;
}
void *fn_800B7D64(){
 UnknownGenObject800B7D64_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CA64;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B7DBC(){
 fn_80066188((int)fn_800B7DE4);
}
void fn_800B7DE4(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562900,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B7E54,(int)lbl_80479880,16,(int)fn_800B7D64,(int)fn_800B7E74,0,0);
}
void *fn_800B7E54(){return fn_800B7D28();}
}
#pragma pop
