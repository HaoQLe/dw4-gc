#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80026B14();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8012FC48();
void *fn_8013496C();
void fn_8013BCD0();
void fn_80145C0C();
void fn_801527B0();
extern char lbl_8049C7D4[];
extern char lbl_8049DA7C[];
extern char lbl_8049DA90[];
extern char lbl_8049DA9C[];
extern char lbl_8049DAA8[];
extern char lbl_804A4A8C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AA160[];
extern char lbl_804AAF48[];
extern char lbl_8055F7E8[8];
extern char lbl_8055F7F0[8];
extern char lbl_8055F7F8[8];
extern char lbl_8055F800[8];
extern void *lbl_805621F4;
extern void *lbl_80563ECC;
extern void *lbl_80563ED0;
extern void *lbl_80563EDC;
extern void *lbl_8056455C;
void *fn_8013B7B0();
void *fn_8013B7EC();
void *fn_8013B828();
void fn_8013B868();
void fn_8013B890();
void *fn_8013B8F8();
void *fn_8013B918();
void fn_8013B954();
void fn_8013B97C();
void *fn_8013B9F0();
void *fn_8013BA10();
void fn_8013BA18();
void *fn_8013BAB0();
void *fn_8013BAEC();
void fn_8013BC10();
void fn_8013BC38();
void *fn_8013BCB0();
}
struct UnknownGenObject8013B828_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8013BAEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013BAEC(){fn_8006665C(this);}
};
struct UnknownGenObject8013BAEC : UnknownGenRoot8013BAEC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject8013BAEC(){unknown00=lbl_804A4A8C;}
};
extern "C" {
void *fn_8013B778(void *object){
 fn_8013B868();
 return fn_8006546C(lbl_80563ECC,object);
}
void *fn_8013B7B0(){
 if(!lbl_80563ECC) lbl_80563ECC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563ECC;
}
void *fn_8013B7EC(){
 if(!lbl_80563ECC || !(reinterpret_cast<unsigned int *>(lbl_80563ECC)[0x24/4]&4)) fn_8013B868();
 return lbl_80563ECC;
}
void *fn_8013B828(){
 UnknownGenObject8013B828_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804AA160;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013B868(){
 fn_80066188((int)fn_8013B890);
}
void fn_8013B890(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563ECC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8013B8F8,(int)lbl_8049DA7C,8,(int)fn_8013B828,0,0,0);
}
void *fn_8013B8F8(){return fn_8013B7EC();}
void *fn_8013B918(){
 if(!lbl_80563ED0 || !(reinterpret_cast<unsigned int *>(lbl_80563ED0)[0x24/4]&4)) fn_8013B954();
 return lbl_80563ED0;
}
void fn_8013B954(){
 fn_80066188((int)fn_8013B97C);
}
void fn_8013B97C(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80563ED0,(int)fn_801527B0,(int)fn_8013BA10,(int)fn_8013B9F0,(int)lbl_8049DA9C,40,0,(int)fn_8013BA18,0,(int)lbl_8049DA90);
}
void *fn_8013B9F0(){return fn_8013B918();}
void *fn_8013BA10(){return lbl_8056455C;}
void fn_8013BA18(){
 void *value0=lbl_80563ED0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F7E8,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80026B14();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_8013B7B0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 fn_800659C0(value0,lbl_8055F7F0,lbl_8055F7F8,lbl_8055F800,value1);
}
void *fn_8013BAB0(){
 if(!lbl_80563EDC || !(reinterpret_cast<unsigned int *>(lbl_80563EDC)[0x24/4]&4)) fn_8013BC10();
 return lbl_80563EDC;
}
void *fn_8013BAEC(){
 UnknownGenObject8013BAEC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A4A8C;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013BC10(){
 fn_80066188((int)fn_8013BC38);
}
void fn_8013BC38(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563EDC,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8013BCB0,(int)lbl_8049C7D4,44,(int)fn_8013BAEC,(int)fn_8013BCD0,0,(int)lbl_8049DAA8);
}
void *fn_8013BCB0(){return fn_8013BAB0();}
}
#pragma pop
