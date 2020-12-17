
/*Function pointer is one of the most widely used concepts in system programming.
  Pointer to function keeps the starting address of the function in the text section 
  and then function can be called using the pointer instead of its name.
  This feature is mainly required when it is expected that some other module
  (many times operating system) calls the function written in the source code.
  The callback functions in operating system concepts are called via function pointers.
  In typical cases, the address of some function is passed to the operating system and 
  the operating system calls that function via address when required. 
  This kind of function is called  as callback function. 
  In Win32 programming event driven mechanism and in UNIX signals are 
  implemented in this way.
*/
