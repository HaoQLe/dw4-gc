#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80038828();
void fn_8003EBC8(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_8046784C[];
extern char lbl_80471914[];
extern char lbl_80473260[];
extern char lbl_80473E30[];
extern char lbl_8055D698[8];
extern char lbl_8055D6A0[4];
extern char lbl_8055D6A4[4];
extern char lbl_8055D6A8[4];
extern char lbl_8055D6AC[4];
extern void *lbl_80561E48;
extern void *lbl_80561E50;
extern void *lbl_80561E54;
extern void *lbl_805621F4;
void *fn_800389B0();
void *fn_800389EC();
void fn_80038A84();
void fn_80038AAC();
void *fn_80038B20();
void *fn_80038B40();
void fn_80038B48();
}
struct UnknownGenRoot800389EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800389EC(){fn_8003EBC8(this);}
};
struct UnknownGenObject800389EC_0 : UnknownGenRoot800389EC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800389EC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800389EC_1 : UnknownGenObject800389EC_0 {
 inline ~UnknownGenObject800389EC_1(){unknown00=lbl_80473E30;}
};
struct UnknownGenObject800389EC : UnknownGenObject800389EC_1 {
 char unknown10[48];
 inline ~UnknownGenObject800389EC(){unknown00=lbl_80473260;}
};
extern "C" {
void *fn_80038978(void *object){
 fn_80038A84();
 return fn_8006546C(lbl_80561E50,object);
}
void *fn_800389B0(){
 if(!lbl_80561E50 || !(reinterpret_cast<unsigned int *>(lbl_80561E50)[0x24/4]&4)) fn_80038A84();
 return lbl_80561E50;
}
void *fn_800389EC(){
 UnknownGenObject800389EC object;
 object.unknown00=lbl_80473260;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80038A84(){
 fn_80066188((int)fn_80038AAC);
}
void fn_80038AAC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561E50,(int)fn_80038828,(int)fn_80038B40,(int)fn_80038B20,(int)lbl_8046784C,56,(int)fn_800389EC,(int)fn_80038B48,0,(int)lbl_8055D698);
}
void *fn_80038B20(){return fn_800389B0();}
void *fn_80038B40(){return lbl_80561E48;}
void fn_80038B48(){
 void *meta=lbl_80561E50;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D6A0,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D6A4,lbl_8055D6A8,lbl_8055D6AC,field);
}
void fn_80038BC4(){
 if(!lbl_80561E54){
  void *object=(lbl_80561E54=fn_8006546C(lbl_80561E50,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561E54));
   reinterpret_cast<short *>(lbl_80561E54)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561E54);
  }
 }
}
}
#pragma pop
