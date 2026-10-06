#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_8002265C();
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
void fn_80075C84(void *);
extern char lbl_8046316C[];
extern char lbl_8047085C[];
extern char lbl_80471914[];
extern char lbl_80476F60[];
extern char lbl_8055CF38[8];
extern char lbl_8055CF40[4];
extern char lbl_8055CF44[4];
extern char lbl_8055CF48[4];
extern char lbl_8055CF4C[4];
extern void *lbl_805614A8;
extern void *lbl_805614B0;
extern void *lbl_805614B4;
extern void *lbl_805621F4;
void *fn_800227E4();
void *fn_80022820();
void fn_800228B8();
void fn_800228E0();
void *fn_80022954();
void *fn_80022974();
void fn_8002297C();
}
struct UnknownGenRoot80022820 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80022820(){fn_80075C84(this);}
};
struct UnknownGenObject80022820_0 : UnknownGenRoot80022820 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80022820_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80022820_1 : UnknownGenObject80022820_0 {
 inline ~UnknownGenObject80022820_1(){unknown00=lbl_80476F60;}
};
struct UnknownGenObject80022820 : UnknownGenObject80022820_1 {
 char unknown10[48];
 inline ~UnknownGenObject80022820(){unknown00=lbl_8047085C;}
};
extern "C" {
void *fn_800227AC(void *object){
 fn_800228B8();
 return fn_8006546C(lbl_805614B0,object);
}
void *fn_800227E4(){
 if(!lbl_805614B0 || !(reinterpret_cast<unsigned int *>(lbl_805614B0)[0x24/4]&4)) fn_800228B8();
 return lbl_805614B0;
}
void *fn_80022820(){
 UnknownGenObject80022820 object;
 object.unknown00=lbl_8047085C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800228B8(){
 fn_80066188((int)fn_800228E0);
}
void fn_800228E0(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805614B0,(int)fn_8002265C,(int)fn_80022974,(int)fn_80022954,(int)lbl_8046316C,56,(int)fn_80022820,(int)fn_8002297C,0,(int)lbl_8055CF38);
}
void *fn_80022954(){return fn_800227E4();}
void *fn_80022974(){return lbl_805614A8;}
void fn_8002297C(){
 void *meta=lbl_805614B0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055CF40,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055CF44,lbl_8055CF48,lbl_8055CF4C,field);
}
void fn_800229F8(){
 if(!lbl_805614B4){
  void *object=(lbl_805614B4=fn_8006546C(lbl_805614B0,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614B4));
   reinterpret_cast<short *>(lbl_805614B4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614B4);
  }
 }
}
}
#pragma pop
