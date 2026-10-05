#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80029E64(void *);
void fn_8002CFD0();
void fn_8002D584();
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_8046530C[];
extern char lbl_80471914[];
extern char lbl_80472100[];
extern char lbl_804721F4[];
extern char lbl_8055D374[8];
extern char lbl_8055D37C[4];
extern char lbl_8055D380[4];
extern char lbl_8055D384[4];
extern char lbl_8055D388[4];
extern void *lbl_8056198C;
extern void *lbl_80561994;
extern void *lbl_80561998;
extern void *lbl_805619A0;
extern void *lbl_805621F4;
void *fn_8002D124();
void *fn_8002D160();
void fn_8002D1FC();
void fn_8002D224();
void *fn_8002D298();
void *fn_8002D2B8();
void fn_8002D2C0();
}
struct UnknownGenObject8002D160 {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject8002D160(){unknown00=lbl_804721F4;unknown00=lbl_80472100;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_8002D124(){
 if(!lbl_80561994 || !(reinterpret_cast<unsigned int *>(lbl_80561994)[0x24/4]&4)) fn_8002D1FC();
 return lbl_80561994;
}
void *fn_8002D160(){
 UnknownGenObject8002D160 object;
 fn_800638E0(&object);
 object.unknown00=lbl_80472100;
 object.unknown00=lbl_804721F4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002D1FC(){
 fn_80066188((int)fn_8002D224);
}
void fn_8002D224(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561994,(int)fn_8002CFD0,(int)fn_8002D2B8,(int)fn_8002D298,(int)lbl_8046530C,56,(int)fn_8002D160,(int)fn_8002D2C0,0,(int)lbl_8055D374);
}
void *fn_8002D298(){return fn_8002D124();}
void *fn_8002D2B8(){return lbl_8056198C;}
void fn_8002D2C0(){
 void *meta=lbl_80561994;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D37C,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D380,lbl_8055D384,lbl_8055D388,field);
}
void fn_8002D33C(){
 if(!lbl_80561998){
  void *object=(lbl_80561998=fn_8006546C(lbl_80561994,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561998));
   reinterpret_cast<short *>(lbl_80561998)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561998);
  }
 }
}
void *fn_8002D3D4(){
 if(!lbl_805619A0) lbl_805619A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805619A0;
}
void *fn_8002D410(){
 if(!lbl_805619A0 || !(reinterpret_cast<unsigned int *>(lbl_805619A0)[0x24/4]&4)) fn_8002D584();
 return lbl_805619A0;
}
}
#pragma pop
