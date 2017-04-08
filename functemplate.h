


#ifdef  _STATIC_PREFIX
#undef  _STATIC_PREFIX
#endif


#ifndef  _STATIC_FUNC_
#define  _STATIC_PREFIX 
#else 
#define _STATIC_PREFIX static
#endif 





/*@
  *jackwu create it
  *time:2017/4/8
  *detail:function.h
  *@*/
#ifdef __FUNC_TEMPLATE_ADD

 _STATIC_PREFIX _T __FUNC_TEMPLATE_ADD(_T a,_T b){
    return a+b;
}
#undef __FUNC_TEMPLATE_ADD
#endif



#ifdef __FUNC_TEMPLATE_SUB
_STATIC_PREFIX _T sub(_T a,_T b){
    return a-b;
}

#undef __FUNC_TEMPLATE_SUB
#endif 

#undef _STATIC_PREFIX
#ifdef _STATIC_FUNC_
#endif _STATIC_FUNC_

#endif