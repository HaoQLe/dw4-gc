#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80042E68(void *,void *);
void fn_8006F35C(void *,void *,void *);
extern char lbl_8046A9F8[];
extern char lbl_804B3044[];
extern void *lbl_80562104;
}
extern "C" {
void fn_80202600(){
 void *local0;
 fn_8006F35C(&local0,lbl_80562104,lbl_8046A9F8);
 fn_80042E68(local0,lbl_804B3044);
 if(local0){
  *reinterpret_cast<void * *>(reinterpret_cast<char *>(local0)+4)=(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>(local0)+4))+-1);
  if(!((unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>(local0)+4)&0x7FFFFF)){
   fn_80066E1C(local0);
  }
 }
}
}
#pragma pop
