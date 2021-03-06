#include "libpov.h"
int main(int cgc_argc, char *cgc_argv[]) {
   cgc_negotiate_type1(0x0, 0x0, 0);
   do {
      unsigned char *read_00000;
      unsigned int read_00000_len;
      unsigned int read_00000_ptr = 0;
      //**** length read
      read_00000_len = 342;
      read_00000 = (unsigned char*)cgc_malloc(read_00000_len);
      int read_00000_res = cgc_length_read(0, read_00000, read_00000_len);
      if (read_00000_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00000_00000[] = 
         "\x0a\x0a\x54\x68\x61\x6e\x6b\x73\x20\x66\x6f\x72\x20\x79\x6f\x75"
         "\x72\x20\x69\x6e\x74\x65\x72\x65\x73\x74\x20\x69\x6e\x20\x74\x68"
         "\x65\x20\x53\x65\x61\x20\x45\x79\x65\x20\x41\x73\x73\x6f\x63\x69"
         "\x61\x74\x69\x6f\x6e\x2e\x0a\x49\x6e\x20\x6f\x72\x64\x65\x72\x20"
         "\x74\x6f\x20\x62\x65\x20\x63\x6f\x6e\x73\x69\x64\x65\x72\x65\x64"
         "\x20\x66\x6f\x72\x20\x74\x68\x65\x20\x6a\x6f\x62\x20\x63\x6f\x6d"
         "\x70\x6c\x65\x74\x65\x20\x74\x68\x65\x20\x70\x72\x65\x6c\x69\x6d"
         "\x69\x6e\x61\x72\x79\x20\x6f\x6e\x6c\x69\x6e\x65\x20\x62\x61\x63"
         "\x6b\x67\x72\x6f\x75\x6e\x64\x20\x63\x68\x65\x63\x6b\x0a\x44\x75"
         "\x65\x20\x74\x6f\x20\x74\x68\x65\x20\x73\x65\x63\x75\x72\x65\x20"
         "\x6e\x61\x74\x75\x72\x65\x20\x6f\x66\x20\x74\x68\x65\x20\x70\x6f"
         "\x73\x69\x74\x69\x6f\x6e\x20\x79\x6f\x75\x20\x61\x72\x65\x20\x61"
         "\x70\x70\x6c\x79\x69\x6e\x67\x20\x66\x6f\x72\x20\x79\x6f\x75\x20"
         "\x6d\x61\x79\x20\x62\x65\x20\x61\x73\x6b\x65\x64\x20\x74\x6f\x0a"
         "\x73\x75\x62\x6d\x69\x74\x20\x61\x64\x64\x69\x74\x69\x6f\x6e\x61"
         "\x6c\x20\x70\x61\x70\x65\x72\x77\x6f\x72\x6b\x20\x61\x66\x74\x65"
         "\x72\x20\x79\x6f\x75\x72\x20\x70\x72\x65\x6c\x69\x6d\x69\x6e\x61"
         "\x72\x79\x20\x62\x61\x63\x6b\x67\x72\x6f\x75\x6e\x64\x20\x63\x68"
         "\x65\x63\x6b\x20\x68\x61\x73\x20\x62\x65\x65\x6e\x20\x61\x70\x70"
         "\x72\x6f\x76\x65\x64\x2e\x0a\x54\x68\x61\x6e\x6b\x20\x79\x6f\x75"
         "\x20\x66\x6f\x72\x20\x79\x6f\x75\x72\x20\x63\x6f\x6f\x70\x65\x72"
         "\x61\x74\x69\x6f\x6e\x0a";
      read_00000_ptr += cgc_data_match(read_00000 + read_00000_ptr, read_00000_len - read_00000_ptr, match_00000_00000, 342);
      cgc_free(read_00000);
      if (read_00000_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00001;
      unsigned int read_00001_len;
      unsigned int read_00001_ptr = 0;
      //**** length read
      read_00001_len = 21;
      read_00001 = (unsigned char*)cgc_malloc(read_00001_len);
      int read_00001_res = cgc_length_read(0, read_00001, read_00001_len);
      if (read_00001_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00001_00000[] = 
         "\x0a\x43\x61\x6e\x64\x69\x64\x61\x74\x65\x20\x49\x6e\x66\x6f\x20"
         "\x46\x6f\x72\x6d\x0a";
      read_00001_ptr += cgc_data_match(read_00001 + read_00001_ptr, read_00001_len - read_00001_ptr, match_00001_00000, 21);
      cgc_free(read_00001);
      if (read_00001_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00002;
      unsigned int read_00002_len;
      unsigned int read_00002_ptr = 0;
      //**** length read
      read_00002_len = 11;
      read_00002 = (unsigned char*)cgc_malloc(read_00002_len);
      int read_00002_res = cgc_length_read(0, read_00002, read_00002_len);
      if (read_00002_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00002_00000[] = 
         "\x4c\x61\x73\x74\x20\x4e\x61\x6d\x65\x3a\x20";
      read_00002_ptr += cgc_data_match(read_00002 + read_00002_ptr, read_00002_len - read_00002_ptr, match_00002_00000, 11);
      cgc_free(read_00002);
      if (read_00002_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00000_00000[] = 
         "\x61\x0a";
      static unsigned int write_00000_00000_len = 2;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = cgc_append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);
      if (write_00000_len > 0) {
         cgc_transmit_all(1, write_00000, write_00000_len);
      }
      cgc_free(write_00000);
   } while (0);
   do {
      unsigned char *read_00003;
      unsigned int read_00003_len;
      unsigned int read_00003_ptr = 0;
      //**** length read
      read_00003_len = 12;
      read_00003 = (unsigned char*)cgc_malloc(read_00003_len);
      int read_00003_res = cgc_length_read(0, read_00003, read_00003_len);
      if (read_00003_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00003_00000[] = 
         "\x46\x69\x72\x73\x74\x20\x4e\x61\x6d\x65\x3a\x20";
      read_00003_ptr += cgc_data_match(read_00003 + read_00003_ptr, read_00003_len - read_00003_ptr, match_00003_00000, 12);
      cgc_free(read_00003);
      if (read_00003_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00001_00000[] = 
         "\x41\x0a";
      static unsigned int write_00001_00000_len = 2;
      unsigned char *write_00001 = NULL;
      unsigned int write_00001_len = 0;
      write_00001 = cgc_append_buf(write_00001, &write_00001_len, write_00001_00000, write_00001_00000_len);
      if (write_00001_len > 0) {
         cgc_transmit_all(1, write_00001, write_00001_len);
      }
      cgc_free(write_00001);
   } while (0);
   do {
      unsigned char *read_00004;
      unsigned int read_00004_len;
      unsigned int read_00004_ptr = 0;
      //**** length read
      read_00004_len = 33;
      read_00004 = (unsigned char*)cgc_malloc(read_00004_len);
      int read_00004_res = cgc_length_read(0, read_00004, read_00004_len);
      if (read_00004_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00004_00000[] = 
         "\x4d\x69\x64\x64\x6c\x65\x20\x4e\x61\x6d\x65\x20\x5b\x4d\x49\x20"
         "\x6f\x72\x20\x4d\x69\x64\x64\x6c\x65\x20\x4e\x61\x6d\x65\x5d\x3a"
         "\x20";
      read_00004_ptr += cgc_data_match(read_00004 + read_00004_ptr, read_00004_len - read_00004_ptr, match_00004_00000, 33);
      cgc_free(read_00004);
      if (read_00004_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00002_00000[] = 
         "\x41\x0a";
      static unsigned int write_00002_00000_len = 2;
      unsigned char *write_00002 = NULL;
      unsigned int write_00002_len = 0;
      write_00002 = cgc_append_buf(write_00002, &write_00002_len, write_00002_00000, write_00002_00000_len);
      if (write_00002_len > 0) {
         cgc_transmit_all(1, write_00002, write_00002_len);
      }
      cgc_free(write_00002);
   } while (0);
   do {
      unsigned char *read_00005;
      unsigned int read_00005_len;
      unsigned int read_00005_ptr = 0;
      //**** length read
      read_00005_len = 26;
      read_00005 = (unsigned char*)cgc_malloc(read_00005_len);
      int read_00005_res = cgc_length_read(0, read_00005, read_00005_len);
      if (read_00005_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00005_00000[] = 
         "\x53\x75\x66\x66\x69\x78\x20\x5b\x4a\x72\x2c\x20\x53\x72\x2c\x20"
         "\x49\x49\x2c\x20\x65\x74\x63\x5d\x3a\x20";
      read_00005_ptr += cgc_data_match(read_00005 + read_00005_ptr, read_00005_len - read_00005_ptr, match_00005_00000, 26);
      cgc_free(read_00005);
      if (read_00005_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00003_00000[] = 
         "\x0a";
      static unsigned int write_00003_00000_len = 1;
      unsigned char *write_00003 = NULL;
      unsigned int write_00003_len = 0;
      write_00003 = cgc_append_buf(write_00003, &write_00003_len, write_00003_00000, write_00003_00000_len);
      if (write_00003_len > 0) {
         cgc_transmit_all(1, write_00003, write_00003_len);
      }
      cgc_free(write_00003);
   } while (0);
   do {
      unsigned char *read_00006;
      unsigned int read_00006_len;
      unsigned int read_00006_ptr = 0;
      //**** delimited read
      static unsigned char read_00006_delim[] = 
         "\x3a\x20";
      read_00006 = NULL;
      read_00006_len = 0;
      int read_00006_res = cgc_delimited_read(0, &read_00006, &read_00006_len, read_00006_delim, 2);
      if (read_00006_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00006_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00006_00000_match;
      pcre *read_00006_00000_pcre = cgc_init_regex(read_00006_00000_regex);
      if (read_00006_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00006_00000_pcre, 0, read_00006 + read_00006_ptr, read_00006_len - read_00006_ptr, &read_00006_00000_match);
         if (rc > 0) {
            read_00006_ptr += read_00006_00000_match.match_end - read_00006_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00006_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00006);
      if (read_00006_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00004_00000[] = 
         "\x31\x31\x0a";
      static unsigned int write_00004_00000_len = 3;
      unsigned char *write_00004 = NULL;
      unsigned int write_00004_len = 0;
      write_00004 = cgc_append_buf(write_00004, &write_00004_len, write_00004_00000, write_00004_00000_len);
      if (write_00004_len > 0) {
         cgc_transmit_all(1, write_00004, write_00004_len);
      }
      cgc_free(write_00004);
   } while (0);
   do {
      unsigned char *read_00007;
      unsigned int read_00007_len;
      unsigned int read_00007_ptr = 0;
      //**** delimited read
      static unsigned char read_00007_delim[] = 
         "\x3a\x20";
      read_00007 = NULL;
      read_00007_len = 0;
      int read_00007_res = cgc_delimited_read(0, &read_00007, &read_00007_len, read_00007_delim, 2);
      if (read_00007_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00007_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00007_00000_match;
      pcre *read_00007_00000_pcre = cgc_init_regex(read_00007_00000_regex);
      if (read_00007_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00007_00000_pcre, 0, read_00007 + read_00007_ptr, read_00007_len - read_00007_ptr, &read_00007_00000_match);
         if (rc > 0) {
            read_00007_ptr += read_00007_00000_match.match_end - read_00007_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00007_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00007);
      if (read_00007_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00005_00000[] = 
         "\x31\x31\x0a";
      static unsigned int write_00005_00000_len = 3;
      unsigned char *write_00005 = NULL;
      unsigned int write_00005_len = 0;
      write_00005 = cgc_append_buf(write_00005, &write_00005_len, write_00005_00000, write_00005_00000_len);
      if (write_00005_len > 0) {
         cgc_transmit_all(1, write_00005, write_00005_len);
      }
      cgc_free(write_00005);
   } while (0);
   do {
      unsigned char *read_00008;
      unsigned int read_00008_len;
      unsigned int read_00008_ptr = 0;
      //**** delimited read
      static unsigned char read_00008_delim[] = 
         "\x3a\x20";
      read_00008 = NULL;
      read_00008_len = 0;
      int read_00008_res = cgc_delimited_read(0, &read_00008, &read_00008_len, read_00008_delim, 2);
      if (read_00008_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00008_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00008_00000_match;
      pcre *read_00008_00000_pcre = cgc_init_regex(read_00008_00000_regex);
      if (read_00008_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00008_00000_pcre, 0, read_00008 + read_00008_ptr, read_00008_len - read_00008_ptr, &read_00008_00000_match);
         if (rc > 0) {
            read_00008_ptr += read_00008_00000_match.match_end - read_00008_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00008_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00008);
      if (read_00008_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00006_00000[] = 
         "\x31\x39\x39\x30\x0a";
      static unsigned int write_00006_00000_len = 5;
      unsigned char *write_00006 = NULL;
      unsigned int write_00006_len = 0;
      write_00006 = cgc_append_buf(write_00006, &write_00006_len, write_00006_00000, write_00006_00000_len);
      if (write_00006_len > 0) {
         cgc_transmit_all(1, write_00006, write_00006_len);
      }
      cgc_free(write_00006);
   } while (0);
   do {
      unsigned char *read_00009;
      unsigned int read_00009_len;
      unsigned int read_00009_ptr = 0;
      //**** delimited read
      static unsigned char read_00009_delim[] = 
         "\x3a\x20";
      read_00009 = NULL;
      read_00009_len = 0;
      int read_00009_res = cgc_delimited_read(0, &read_00009, &read_00009_len, read_00009_delim, 2);
      if (read_00009_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00009_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00009_00000_match;
      pcre *read_00009_00000_pcre = cgc_init_regex(read_00009_00000_regex);
      if (read_00009_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00009_00000_pcre, 0, read_00009 + read_00009_ptr, read_00009_len - read_00009_ptr, &read_00009_00000_match);
         if (rc > 0) {
            read_00009_ptr += read_00009_00000_match.match_end - read_00009_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00009_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00009);
      if (read_00009_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00007_00000[] = 
         "\x35\x0a";
      static unsigned int write_00007_00000_len = 2;
      unsigned char *write_00007 = NULL;
      unsigned int write_00007_len = 0;
      write_00007 = cgc_append_buf(write_00007, &write_00007_len, write_00007_00000, write_00007_00000_len);
      if (write_00007_len > 0) {
         cgc_transmit_all(1, write_00007, write_00007_len);
      }
      cgc_free(write_00007);
   } while (0);
   do {
      unsigned char *read_00010;
      unsigned int read_00010_len;
      unsigned int read_00010_ptr = 0;
      //**** delimited read
      static unsigned char read_00010_delim[] = 
         "\x3a\x20";
      read_00010 = NULL;
      read_00010_len = 0;
      int read_00010_res = cgc_delimited_read(0, &read_00010, &read_00010_len, read_00010_delim, 2);
      if (read_00010_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00010_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00010_00000_match;
      pcre *read_00010_00000_pcre = cgc_init_regex(read_00010_00000_regex);
      if (read_00010_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00010_00000_pcre, 0, read_00010 + read_00010_ptr, read_00010_len - read_00010_ptr, &read_00010_00000_match);
         if (rc > 0) {
            read_00010_ptr += read_00010_00000_match.match_end - read_00010_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00010_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00010);
      if (read_00010_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00008_00000[] = 
         "\x35\x0a";
      static unsigned int write_00008_00000_len = 2;
      unsigned char *write_00008 = NULL;
      unsigned int write_00008_len = 0;
      write_00008 = cgc_append_buf(write_00008, &write_00008_len, write_00008_00000, write_00008_00000_len);
      if (write_00008_len > 0) {
         cgc_transmit_all(1, write_00008, write_00008_len);
      }
      cgc_free(write_00008);
   } while (0);
   do {
      unsigned char *read_00011;
      unsigned int read_00011_len;
      unsigned int read_00011_ptr = 0;
      //**** delimited read
      static unsigned char read_00011_delim[] = 
         "\x3a\x20";
      read_00011 = NULL;
      read_00011_len = 0;
      int read_00011_res = cgc_delimited_read(0, &read_00011, &read_00011_len, read_00011_delim, 2);
      if (read_00011_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00011_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00011_00000_match;
      pcre *read_00011_00000_pcre = cgc_init_regex(read_00011_00000_regex);
      if (read_00011_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00011_00000_pcre, 0, read_00011 + read_00011_ptr, read_00011_len - read_00011_ptr, &read_00011_00000_match);
         if (rc > 0) {
            read_00011_ptr += read_00011_00000_match.match_end - read_00011_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00011_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00011);
      if (read_00011_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00009_00000[] = 
         "\x32\x32\x32\x0a";
      static unsigned int write_00009_00000_len = 4;
      unsigned char *write_00009 = NULL;
      unsigned int write_00009_len = 0;
      write_00009 = cgc_append_buf(write_00009, &write_00009_len, write_00009_00000, write_00009_00000_len);
      if (write_00009_len > 0) {
         cgc_transmit_all(1, write_00009, write_00009_len);
      }
      cgc_free(write_00009);
   } while (0);
   do {
      unsigned char *read_00012;
      unsigned int read_00012_len;
      unsigned int read_00012_ptr = 0;
      //**** delimited read
      static unsigned char read_00012_delim[] = 
         "\x3a\x20";
      read_00012 = NULL;
      read_00012_len = 0;
      int read_00012_res = cgc_delimited_read(0, &read_00012, &read_00012_len, read_00012_delim, 2);
      if (read_00012_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00012_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00012_00000_match;
      pcre *read_00012_00000_pcre = cgc_init_regex(read_00012_00000_regex);
      if (read_00012_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00012_00000_pcre, 0, read_00012 + read_00012_ptr, read_00012_len - read_00012_ptr, &read_00012_00000_match);
         if (rc > 0) {
            read_00012_ptr += read_00012_00000_match.match_end - read_00012_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00012_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00012);
      if (read_00012_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00010_00000[] = 
         "\x4d\x0a";
      static unsigned int write_00010_00000_len = 2;
      unsigned char *write_00010 = NULL;
      unsigned int write_00010_len = 0;
      write_00010 = cgc_append_buf(write_00010, &write_00010_len, write_00010_00000, write_00010_00000_len);
      if (write_00010_len > 0) {
         cgc_transmit_all(1, write_00010, write_00010_len);
      }
      cgc_free(write_00010);
   } while (0);
   do {
      unsigned char *read_00013;
      unsigned int read_00013_len;
      unsigned int read_00013_ptr = 0;
      //**** delimited read
      static unsigned char read_00013_delim[] = 
         "\x3a\x20";
      read_00013 = NULL;
      read_00013_len = 0;
      int read_00013_res = cgc_delimited_read(0, &read_00013, &read_00013_len, read_00013_delim, 2);
      if (read_00013_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00013_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00013_00000_match;
      pcre *read_00013_00000_pcre = cgc_init_regex(read_00013_00000_regex);
      if (read_00013_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00013_00000_pcre, 0, read_00013 + read_00013_ptr, read_00013_len - read_00013_ptr, &read_00013_00000_match);
         if (rc > 0) {
            read_00013_ptr += read_00013_00000_match.match_end - read_00013_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00013_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00013);
      if (read_00013_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00011_00000[] = 
         "\x42\x6c\x75\x65\x0a";
      static unsigned int write_00011_00000_len = 5;
      unsigned char *write_00011 = NULL;
      unsigned int write_00011_len = 0;
      write_00011 = cgc_append_buf(write_00011, &write_00011_len, write_00011_00000, write_00011_00000_len);
      if (write_00011_len > 0) {
         cgc_transmit_all(1, write_00011, write_00011_len);
      }
      cgc_free(write_00011);
   } while (0);
   do {
      unsigned char *read_00014;
      unsigned int read_00014_len;
      unsigned int read_00014_ptr = 0;
      //**** delimited read
      static unsigned char read_00014_delim[] = 
         "\x3a\x20";
      read_00014 = NULL;
      read_00014_len = 0;
      int read_00014_res = cgc_delimited_read(0, &read_00014, &read_00014_len, read_00014_delim, 2);
      if (read_00014_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00014_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00014_00000_match;
      pcre *read_00014_00000_pcre = cgc_init_regex(read_00014_00000_regex);
      if (read_00014_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00014_00000_pcre, 0, read_00014 + read_00014_ptr, read_00014_len - read_00014_ptr, &read_00014_00000_match);
         if (rc > 0) {
            read_00014_ptr += read_00014_00000_match.match_end - read_00014_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00014_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00014);
      if (read_00014_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00012_00000[] = 
         "\x47\x72\x65\x65\x6e\x0a";
      static unsigned int write_00012_00000_len = 6;
      unsigned char *write_00012 = NULL;
      unsigned int write_00012_len = 0;
      write_00012 = cgc_append_buf(write_00012, &write_00012_len, write_00012_00000, write_00012_00000_len);
      if (write_00012_len > 0) {
         cgc_transmit_all(1, write_00012, write_00012_len);
      }
      cgc_free(write_00012);
   } while (0);
   do {
      unsigned char *read_00015;
      unsigned int read_00015_len;
      unsigned int read_00015_ptr = 0;
      //**** length read
      read_00015_len = 35;
      read_00015 = (unsigned char*)cgc_malloc(read_00015_len);
      int read_00015_res = cgc_length_read(0, read_00015, read_00015_len);
      if (read_00015_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00015_00000[] = 
         "\x0a\x2a\x2a\x2a\x2a\x2a\x2a\x2a\x2a\x2a\x43\x61\x6e\x64\x69\x64"
         "\x61\x74\x65\x20\x49\x6e\x66\x6f\x3a\x2a\x2a\x2a\x2a\x2a\x2a\x2a"
         "\x2a\x2a\x0a";
      read_00015_ptr += cgc_data_match(read_00015 + read_00015_ptr, read_00015_len - read_00015_ptr, match_00015_00000, 35);
      cgc_free(read_00015);
      if (read_00015_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00016;
      unsigned int read_00016_len;
      unsigned int read_00016_ptr = 0;
      //**** delimited read
      static unsigned char read_00016_delim[] = 
         "\x0a";
      read_00016 = NULL;
      read_00016_len = 0;
      int read_00016_res = cgc_delimited_read(0, &read_00016, &read_00016_len, read_00016_delim, 1);
      if (read_00016_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00016_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00016_00000_match;
      pcre *read_00016_00000_pcre = cgc_init_regex(read_00016_00000_regex);
      if (read_00016_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00016_00000_pcre, 0, read_00016 + read_00016_ptr, read_00016_len - read_00016_ptr, &read_00016_00000_match);
         if (rc > 0) {
            read_00016_ptr += read_00016_00000_match.match_end - read_00016_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00016_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00016);
      if (read_00016_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00017;
      unsigned int read_00017_len;
      unsigned int read_00017_ptr = 0;
      //**** delimited read
      static unsigned char read_00017_delim[] = 
         "\x0a";
      read_00017 = NULL;
      read_00017_len = 0;
      int read_00017_res = cgc_delimited_read(0, &read_00017, &read_00017_len, read_00017_delim, 1);
      if (read_00017_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00017_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00017_00000_match;
      pcre *read_00017_00000_pcre = cgc_init_regex(read_00017_00000_regex);
      if (read_00017_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00017_00000_pcre, 0, read_00017 + read_00017_ptr, read_00017_len - read_00017_ptr, &read_00017_00000_match);
         if (rc > 0) {
            read_00017_ptr += read_00017_00000_match.match_end - read_00017_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00017_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00017);
      if (read_00017_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00018;
      unsigned int read_00018_len;
      unsigned int read_00018_ptr = 0;
      //**** delimited read
      static unsigned char read_00018_delim[] = 
         "\x0a";
      read_00018 = NULL;
      read_00018_len = 0;
      int read_00018_res = cgc_delimited_read(0, &read_00018, &read_00018_len, read_00018_delim, 1);
      if (read_00018_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00018_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00018_00000_match;
      pcre *read_00018_00000_pcre = cgc_init_regex(read_00018_00000_regex);
      if (read_00018_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00018_00000_pcre, 0, read_00018 + read_00018_ptr, read_00018_len - read_00018_ptr, &read_00018_00000_match);
         if (rc > 0) {
            read_00018_ptr += read_00018_00000_match.match_end - read_00018_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00018_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00018);
      if (read_00018_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00019;
      unsigned int read_00019_len;
      unsigned int read_00019_ptr = 0;
      //**** delimited read
      static unsigned char read_00019_delim[] = 
         "\x0a";
      read_00019 = NULL;
      read_00019_len = 0;
      int read_00019_res = cgc_delimited_read(0, &read_00019, &read_00019_len, read_00019_delim, 1);
      if (read_00019_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00019_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00019_00000_match;
      pcre *read_00019_00000_pcre = cgc_init_regex(read_00019_00000_regex);
      if (read_00019_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00019_00000_pcre, 0, read_00019 + read_00019_ptr, read_00019_len - read_00019_ptr, &read_00019_00000_match);
         if (rc > 0) {
            read_00019_ptr += read_00019_00000_match.match_end - read_00019_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00019_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00019);
      if (read_00019_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00020;
      unsigned int read_00020_len;
      unsigned int read_00020_ptr = 0;
      //**** delimited read
      static unsigned char read_00020_delim[] = 
         "\x0a";
      read_00020 = NULL;
      read_00020_len = 0;
      int read_00020_res = cgc_delimited_read(0, &read_00020, &read_00020_len, read_00020_delim, 1);
      if (read_00020_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00020_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00020_00000_match;
      pcre *read_00020_00000_pcre = cgc_init_regex(read_00020_00000_regex);
      if (read_00020_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00020_00000_pcre, 0, read_00020 + read_00020_ptr, read_00020_len - read_00020_ptr, &read_00020_00000_match);
         if (rc > 0) {
            read_00020_ptr += read_00020_00000_match.match_end - read_00020_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00020_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00020);
      if (read_00020_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00021;
      unsigned int read_00021_len;
      unsigned int read_00021_ptr = 0;
      //**** delimited read
      static unsigned char read_00021_delim[] = 
         "\x0a";
      read_00021 = NULL;
      read_00021_len = 0;
      int read_00021_res = cgc_delimited_read(0, &read_00021, &read_00021_len, read_00021_delim, 1);
      if (read_00021_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00021_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00021_00000_match;
      pcre *read_00021_00000_pcre = cgc_init_regex(read_00021_00000_regex);
      if (read_00021_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00021_00000_pcre, 0, read_00021 + read_00021_ptr, read_00021_len - read_00021_ptr, &read_00021_00000_match);
         if (rc > 0) {
            read_00021_ptr += read_00021_00000_match.match_end - read_00021_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00021_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00021);
      if (read_00021_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00022;
      unsigned int read_00022_len;
      unsigned int read_00022_ptr = 0;
      //**** delimited read
      static unsigned char read_00022_delim[] = 
         "\x0a";
      read_00022 = NULL;
      read_00022_len = 0;
      int read_00022_res = cgc_delimited_read(0, &read_00022, &read_00022_len, read_00022_delim, 1);
      if (read_00022_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00022_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00022_00000_match;
      pcre *read_00022_00000_pcre = cgc_init_regex(read_00022_00000_regex);
      if (read_00022_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00022_00000_pcre, 0, read_00022 + read_00022_ptr, read_00022_len - read_00022_ptr, &read_00022_00000_match);
         if (rc > 0) {
            read_00022_ptr += read_00022_00000_match.match_end - read_00022_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00022_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00022);
      if (read_00022_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00023;
      unsigned int read_00023_len;
      unsigned int read_00023_ptr = 0;
      //**** delimited read
      static unsigned char read_00023_delim[] = 
         "\x0a";
      read_00023 = NULL;
      read_00023_len = 0;
      int read_00023_res = cgc_delimited_read(0, &read_00023, &read_00023_len, read_00023_delim, 1);
      if (read_00023_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00023_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00023_00000_match;
      pcre *read_00023_00000_pcre = cgc_init_regex(read_00023_00000_regex);
      if (read_00023_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00023_00000_pcre, 0, read_00023 + read_00023_ptr, read_00023_len - read_00023_ptr, &read_00023_00000_match);
         if (rc > 0) {
            read_00023_ptr += read_00023_00000_match.match_end - read_00023_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00023_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00023);
      if (read_00023_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00024;
      unsigned int read_00024_len;
      unsigned int read_00024_ptr = 0;
      //**** delimited read
      static unsigned char read_00024_delim[] = 
         "\x0a";
      read_00024 = NULL;
      read_00024_len = 0;
      int read_00024_res = cgc_delimited_read(0, &read_00024, &read_00024_len, read_00024_delim, 1);
      if (read_00024_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00024_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00024_00000_match;
      pcre *read_00024_00000_pcre = cgc_init_regex(read_00024_00000_regex);
      if (read_00024_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00024_00000_pcre, 0, read_00024 + read_00024_ptr, read_00024_len - read_00024_ptr, &read_00024_00000_match);
         if (rc > 0) {
            read_00024_ptr += read_00024_00000_match.match_end - read_00024_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00024_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00024);
      if (read_00024_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00025;
      unsigned int read_00025_len;
      unsigned int read_00025_ptr = 0;
      //**** delimited read
      static unsigned char read_00025_delim[] = 
         "\x0a";
      read_00025 = NULL;
      read_00025_len = 0;
      int read_00025_res = cgc_delimited_read(0, &read_00025, &read_00025_len, read_00025_delim, 1);
      if (read_00025_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00025_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00025_00000_match;
      pcre *read_00025_00000_pcre = cgc_init_regex(read_00025_00000_regex);
      if (read_00025_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00025_00000_pcre, 0, read_00025 + read_00025_ptr, read_00025_len - read_00025_ptr, &read_00025_00000_match);
         if (rc > 0) {
            read_00025_ptr += read_00025_00000_match.match_end - read_00025_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00025_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00025);
      if (read_00025_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00026;
      unsigned int read_00026_len;
      unsigned int read_00026_ptr = 0;
      //**** delimited read
      static unsigned char read_00026_delim[] = 
         "\x0a";
      read_00026 = NULL;
      read_00026_len = 0;
      int read_00026_res = cgc_delimited_read(0, &read_00026, &read_00026_len, read_00026_delim, 1);
      if (read_00026_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00026_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00026_00000_match;
      pcre *read_00026_00000_pcre = cgc_init_regex(read_00026_00000_regex);
      if (read_00026_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00026_00000_pcre, 0, read_00026 + read_00026_ptr, read_00026_len - read_00026_ptr, &read_00026_00000_match);
         if (rc > 0) {
            read_00026_ptr += read_00026_00000_match.match_end - read_00026_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00026_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00026);
      if (read_00026_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00027;
      unsigned int read_00027_len;
      unsigned int read_00027_ptr = 0;
      //**** delimited read
      static unsigned char read_00027_delim[] = 
         "\x0a";
      read_00027 = NULL;
      read_00027_len = 0;
      int read_00027_res = cgc_delimited_read(0, &read_00027, &read_00027_len, read_00027_delim, 1);
      if (read_00027_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00027_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00027_00000_match;
      pcre *read_00027_00000_pcre = cgc_init_regex(read_00027_00000_regex);
      if (read_00027_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00027_00000_pcre, 0, read_00027 + read_00027_ptr, read_00027_len - read_00027_ptr, &read_00027_00000_match);
         if (rc > 0) {
            read_00027_ptr += read_00027_00000_match.match_end - read_00027_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00027_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00027);
      if (read_00027_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00028;
      unsigned int read_00028_len;
      unsigned int read_00028_ptr = 0;
      //**** delimited read
      static unsigned char read_00028_delim[] = 
         "\x0a";
      read_00028 = NULL;
      read_00028_len = 0;
      int read_00028_res = cgc_delimited_read(0, &read_00028, &read_00028_len, read_00028_delim, 1);
      if (read_00028_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00028_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00028_00000_match;
      pcre *read_00028_00000_pcre = cgc_init_regex(read_00028_00000_regex);
      if (read_00028_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00028_00000_pcre, 0, read_00028 + read_00028_ptr, read_00028_len - read_00028_ptr, &read_00028_00000_match);
         if (rc > 0) {
            read_00028_ptr += read_00028_00000_match.match_end - read_00028_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00028_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00028);
      if (read_00028_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00029;
      unsigned int read_00029_len;
      unsigned int read_00029_ptr = 0;
      //**** delimited read
      static unsigned char read_00029_delim[] = 
         "\x0a";
      read_00029 = NULL;
      read_00029_len = 0;
      int read_00029_res = cgc_delimited_read(0, &read_00029, &read_00029_len, read_00029_delim, 1);
      if (read_00029_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00029_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00029_00000_match;
      pcre *read_00029_00000_pcre = cgc_init_regex(read_00029_00000_regex);
      if (read_00029_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00029_00000_pcre, 0, read_00029 + read_00029_ptr, read_00029_len - read_00029_ptr, &read_00029_00000_match);
         if (rc > 0) {
            read_00029_ptr += read_00029_00000_match.match_end - read_00029_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00029_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00029);
      if (read_00029_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00030;
      unsigned int read_00030_len;
      unsigned int read_00030_ptr = 0;
      //**** delimited read
      static unsigned char read_00030_delim[] = 
         "\x0a";
      read_00030 = NULL;
      read_00030_len = 0;
      int read_00030_res = cgc_delimited_read(0, &read_00030, &read_00030_len, read_00030_delim, 1);
      if (read_00030_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00030_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00030_00000_match;
      pcre *read_00030_00000_pcre = cgc_init_regex(read_00030_00000_regex);
      if (read_00030_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00030_00000_pcre, 0, read_00030 + read_00030_ptr, read_00030_len - read_00030_ptr, &read_00030_00000_match);
         if (rc > 0) {
            read_00030_ptr += read_00030_00000_match.match_end - read_00030_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00030_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00030);
      if (read_00030_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00013_00000[] = 
         "\x2a\x2a\x75\x70\x64\x61\x74\x65\x20\x4c\x61\x73\x74\x20\x4e\x61"
         "\x6d\x65\x0a";
      static unsigned int write_00013_00000_len = 19;
      unsigned char *write_00013 = NULL;
      unsigned int write_00013_len = 0;
      write_00013 = cgc_append_buf(write_00013, &write_00013_len, write_00013_00000, write_00013_00000_len);
      if (write_00013_len > 0) {
         cgc_transmit_all(1, write_00013, write_00013_len);
      }
      cgc_free(write_00013);
   } while (0);
   do {
      unsigned char *read_00031;
      unsigned int read_00031_len;
      unsigned int read_00031_ptr = 0;
      //**** length read
      read_00031_len = 11;
      read_00031 = (unsigned char*)cgc_malloc(read_00031_len);
      int read_00031_res = cgc_length_read(0, read_00031, read_00031_len);
      if (read_00031_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00031_00000[] = 
         "\x4c\x61\x73\x74\x20\x4e\x61\x6d\x65\x3a\x20";
      read_00031_ptr += cgc_data_match(read_00031 + read_00031_ptr, read_00031_len - read_00031_ptr, match_00031_00000, 11);
      cgc_free(read_00031);
      if (read_00031_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00014_00000[] = 
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61\x61"
         "\x0a";
      static unsigned int write_00014_00000_len = 4001;
      unsigned char *write_00014 = NULL;
      unsigned int write_00014_len = 0;
      write_00014 = cgc_append_buf(write_00014, &write_00014_len, write_00014_00000, write_00014_00000_len);
      if (write_00014_len > 0) {
         cgc_transmit_all(1, write_00014, write_00014_len);
      }
      cgc_free(write_00014);
   } while (0);
   do {
      unsigned char *read_00032;
      unsigned int read_00032_len;
      unsigned int read_00032_ptr = 0;
      //**** length read
      read_00032_len = 21;
      read_00032 = (unsigned char*)cgc_malloc(read_00032_len);
      int read_00032_res = cgc_length_read(0, read_00032, read_00032_len);
      if (read_00032_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00032_00000[] = 
         "\x0a\x43\x61\x6e\x64\x69\x64\x61\x74\x65\x20\x49\x6e\x66\x6f\x20"
         "\x46\x6f\x72\x6d\x0a";
      read_00032_ptr += cgc_data_match(read_00032 + read_00032_ptr, read_00032_len - read_00032_ptr, match_00032_00000, 21);
      cgc_free(read_00032);
      if (read_00032_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00033;
      unsigned int read_00033_len;
      unsigned int read_00033_ptr = 0;
      //**** length read
      read_00033_len = 35;
      read_00033 = (unsigned char*)cgc_malloc(read_00033_len);
      int read_00033_res = cgc_length_read(0, read_00033, read_00033_len);
      if (read_00033_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00033_00000[] = 
         "\x0a\x2a\x2a\x2a\x2a\x2a\x2a\x2a\x2a\x2a\x43\x61\x6e\x64\x69\x64"
         "\x61\x74\x65\x20\x49\x6e\x66\x6f\x3a\x2a\x2a\x2a\x2a\x2a\x2a\x2a"
         "\x2a\x2a\x0a";
      read_00033_ptr += cgc_data_match(read_00033 + read_00033_ptr, read_00033_len - read_00033_ptr, match_00033_00000, 35);
      cgc_free(read_00033);
      if (read_00033_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00034;
      unsigned int read_00034_len;
      unsigned int read_00034_ptr = 0;
      //**** delimited read
      static unsigned char read_00034_delim[] = 
         "\x0a";
      read_00034 = NULL;
      read_00034_len = 0;
      int read_00034_res = cgc_delimited_read(0, &read_00034, &read_00034_len, read_00034_delim, 1);
      if (read_00034_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00034_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00034_00000_match;
      pcre *read_00034_00000_pcre = cgc_init_regex(read_00034_00000_regex);
      if (read_00034_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00034_00000_pcre, 0, read_00034 + read_00034_ptr, read_00034_len - read_00034_ptr, &read_00034_00000_match);
         if (rc > 0) {
            read_00034_ptr += read_00034_00000_match.match_end - read_00034_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00034_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00034);
      if (read_00034_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00035;
      unsigned int read_00035_len;
      unsigned int read_00035_ptr = 0;
      //**** delimited read
      static unsigned char read_00035_delim[] = 
         "\x0a";
      read_00035 = NULL;
      read_00035_len = 0;
      int read_00035_res = cgc_delimited_read(0, &read_00035, &read_00035_len, read_00035_delim, 1);
      if (read_00035_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00035_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00035_00000_match;
      pcre *read_00035_00000_pcre = cgc_init_regex(read_00035_00000_regex);
      if (read_00035_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00035_00000_pcre, 0, read_00035 + read_00035_ptr, read_00035_len - read_00035_ptr, &read_00035_00000_match);
         if (rc > 0) {
            read_00035_ptr += read_00035_00000_match.match_end - read_00035_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00035_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00035);
      if (read_00035_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00036;
      unsigned int read_00036_len;
      unsigned int read_00036_ptr = 0;
      //**** delimited read
      static unsigned char read_00036_delim[] = 
         "\x0a";
      read_00036 = NULL;
      read_00036_len = 0;
      int read_00036_res = cgc_delimited_read(0, &read_00036, &read_00036_len, read_00036_delim, 1);
      if (read_00036_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00036_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00036_00000_match;
      pcre *read_00036_00000_pcre = cgc_init_regex(read_00036_00000_regex);
      if (read_00036_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00036_00000_pcre, 0, read_00036 + read_00036_ptr, read_00036_len - read_00036_ptr, &read_00036_00000_match);
         if (rc > 0) {
            read_00036_ptr += read_00036_00000_match.match_end - read_00036_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00036_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00036);
      if (read_00036_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00037;
      unsigned int read_00037_len;
      unsigned int read_00037_ptr = 0;
      //**** delimited read
      static unsigned char read_00037_delim[] = 
         "\x0a";
      read_00037 = NULL;
      read_00037_len = 0;
      int read_00037_res = cgc_delimited_read(0, &read_00037, &read_00037_len, read_00037_delim, 1);
      if (read_00037_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00037_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00037_00000_match;
      pcre *read_00037_00000_pcre = cgc_init_regex(read_00037_00000_regex);
      if (read_00037_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00037_00000_pcre, 0, read_00037 + read_00037_ptr, read_00037_len - read_00037_ptr, &read_00037_00000_match);
         if (rc > 0) {
            read_00037_ptr += read_00037_00000_match.match_end - read_00037_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00037_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00037);
      if (read_00037_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00038;
      unsigned int read_00038_len;
      unsigned int read_00038_ptr = 0;
      //**** delimited read
      static unsigned char read_00038_delim[] = 
         "\x0a";
      read_00038 = NULL;
      read_00038_len = 0;
      int read_00038_res = cgc_delimited_read(0, &read_00038, &read_00038_len, read_00038_delim, 1);
      if (read_00038_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00038_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00038_00000_match;
      pcre *read_00038_00000_pcre = cgc_init_regex(read_00038_00000_regex);
      if (read_00038_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00038_00000_pcre, 0, read_00038 + read_00038_ptr, read_00038_len - read_00038_ptr, &read_00038_00000_match);
         if (rc > 0) {
            read_00038_ptr += read_00038_00000_match.match_end - read_00038_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00038_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00038);
      if (read_00038_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00039;
      unsigned int read_00039_len;
      unsigned int read_00039_ptr = 0;
      //**** delimited read
      static unsigned char read_00039_delim[] = 
         "\x0a";
      read_00039 = NULL;
      read_00039_len = 0;
      int read_00039_res = cgc_delimited_read(0, &read_00039, &read_00039_len, read_00039_delim, 1);
      if (read_00039_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00039_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00039_00000_match;
      pcre *read_00039_00000_pcre = cgc_init_regex(read_00039_00000_regex);
      if (read_00039_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00039_00000_pcre, 0, read_00039 + read_00039_ptr, read_00039_len - read_00039_ptr, &read_00039_00000_match);
         if (rc > 0) {
            read_00039_ptr += read_00039_00000_match.match_end - read_00039_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00039_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00039);
      if (read_00039_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00040;
      unsigned int read_00040_len;
      unsigned int read_00040_ptr = 0;
      //**** delimited read
      static unsigned char read_00040_delim[] = 
         "\x0a";
      read_00040 = NULL;
      read_00040_len = 0;
      int read_00040_res = cgc_delimited_read(0, &read_00040, &read_00040_len, read_00040_delim, 1);
      if (read_00040_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00040_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00040_00000_match;
      pcre *read_00040_00000_pcre = cgc_init_regex(read_00040_00000_regex);
      if (read_00040_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00040_00000_pcre, 0, read_00040 + read_00040_ptr, read_00040_len - read_00040_ptr, &read_00040_00000_match);
         if (rc > 0) {
            read_00040_ptr += read_00040_00000_match.match_end - read_00040_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00040_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00040);
      if (read_00040_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00041;
      unsigned int read_00041_len;
      unsigned int read_00041_ptr = 0;
      //**** delimited read
      static unsigned char read_00041_delim[] = 
         "\x0a";
      read_00041 = NULL;
      read_00041_len = 0;
      int read_00041_res = cgc_delimited_read(0, &read_00041, &read_00041_len, read_00041_delim, 1);
      if (read_00041_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00041_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00041_00000_match;
      pcre *read_00041_00000_pcre = cgc_init_regex(read_00041_00000_regex);
      if (read_00041_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00041_00000_pcre, 0, read_00041 + read_00041_ptr, read_00041_len - read_00041_ptr, &read_00041_00000_match);
         if (rc > 0) {
            read_00041_ptr += read_00041_00000_match.match_end - read_00041_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00041_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00041);
      if (read_00041_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00042;
      unsigned int read_00042_len;
      unsigned int read_00042_ptr = 0;
      //**** delimited read
      static unsigned char read_00042_delim[] = 
         "\x0a";
      read_00042 = NULL;
      read_00042_len = 0;
      int read_00042_res = cgc_delimited_read(0, &read_00042, &read_00042_len, read_00042_delim, 1);
      if (read_00042_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00042_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00042_00000_match;
      pcre *read_00042_00000_pcre = cgc_init_regex(read_00042_00000_regex);
      if (read_00042_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00042_00000_pcre, 0, read_00042 + read_00042_ptr, read_00042_len - read_00042_ptr, &read_00042_00000_match);
         if (rc > 0) {
            read_00042_ptr += read_00042_00000_match.match_end - read_00042_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00042_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00042);
      if (read_00042_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00043;
      unsigned int read_00043_len;
      unsigned int read_00043_ptr = 0;
      //**** delimited read
      static unsigned char read_00043_delim[] = 
         "\x0a";
      read_00043 = NULL;
      read_00043_len = 0;
      int read_00043_res = cgc_delimited_read(0, &read_00043, &read_00043_len, read_00043_delim, 1);
      if (read_00043_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00043_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00043_00000_match;
      pcre *read_00043_00000_pcre = cgc_init_regex(read_00043_00000_regex);
      if (read_00043_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00043_00000_pcre, 0, read_00043 + read_00043_ptr, read_00043_len - read_00043_ptr, &read_00043_00000_match);
         if (rc > 0) {
            read_00043_ptr += read_00043_00000_match.match_end - read_00043_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00043_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00043);
      if (read_00043_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00044;
      unsigned int read_00044_len;
      unsigned int read_00044_ptr = 0;
      //**** delimited read
      static unsigned char read_00044_delim[] = 
         "\x0a";
      read_00044 = NULL;
      read_00044_len = 0;
      int read_00044_res = cgc_delimited_read(0, &read_00044, &read_00044_len, read_00044_delim, 1);
      if (read_00044_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00044_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00044_00000_match;
      pcre *read_00044_00000_pcre = cgc_init_regex(read_00044_00000_regex);
      if (read_00044_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00044_00000_pcre, 0, read_00044 + read_00044_ptr, read_00044_len - read_00044_ptr, &read_00044_00000_match);
         if (rc > 0) {
            read_00044_ptr += read_00044_00000_match.match_end - read_00044_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00044_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00044);
      if (read_00044_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00045;
      unsigned int read_00045_len;
      unsigned int read_00045_ptr = 0;
      //**** delimited read
      static unsigned char read_00045_delim[] = 
         "\x0a";
      read_00045 = NULL;
      read_00045_len = 0;
      int read_00045_res = cgc_delimited_read(0, &read_00045, &read_00045_len, read_00045_delim, 1);
      if (read_00045_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00045_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00045_00000_match;
      pcre *read_00045_00000_pcre = cgc_init_regex(read_00045_00000_regex);
      if (read_00045_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00045_00000_pcre, 0, read_00045 + read_00045_ptr, read_00045_len - read_00045_ptr, &read_00045_00000_match);
         if (rc > 0) {
            read_00045_ptr += read_00045_00000_match.match_end - read_00045_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00045_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00045);
      if (read_00045_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00046;
      unsigned int read_00046_len;
      unsigned int read_00046_ptr = 0;
      //**** delimited read
      static unsigned char read_00046_delim[] = 
         "\x0a";
      read_00046 = NULL;
      read_00046_len = 0;
      int read_00046_res = cgc_delimited_read(0, &read_00046, &read_00046_len, read_00046_delim, 1);
      if (read_00046_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00046_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00046_00000_match;
      pcre *read_00046_00000_pcre = cgc_init_regex(read_00046_00000_regex);
      if (read_00046_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00046_00000_pcre, 0, read_00046 + read_00046_ptr, read_00046_len - read_00046_ptr, &read_00046_00000_match);
         if (rc > 0) {
            read_00046_ptr += read_00046_00000_match.match_end - read_00046_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00046_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00046);
      if (read_00046_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00047;
      unsigned int read_00047_len;
      unsigned int read_00047_ptr = 0;
      //**** delimited read
      static unsigned char read_00047_delim[] = 
         "\x0a";
      read_00047 = NULL;
      read_00047_len = 0;
      int read_00047_res = cgc_delimited_read(0, &read_00047, &read_00047_len, read_00047_delim, 1);
      if (read_00047_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00047_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00047_00000_match;
      pcre *read_00047_00000_pcre = cgc_init_regex(read_00047_00000_regex);
      if (read_00047_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00047_00000_pcre, 0, read_00047 + read_00047_ptr, read_00047_len - read_00047_ptr, &read_00047_00000_match);
         if (rc > 0) {
            read_00047_ptr += read_00047_00000_match.match_end - read_00047_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00047_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00047);
      if (read_00047_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00048;
      unsigned int read_00048_len;
      unsigned int read_00048_ptr = 0;
      //**** delimited read
      static unsigned char read_00048_delim[] = 
         "\x0a";
      read_00048 = NULL;
      read_00048_len = 0;
      int read_00048_res = cgc_delimited_read(0, &read_00048, &read_00048_len, read_00048_delim, 1);
      if (read_00048_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00048_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00048_00000_match;
      pcre *read_00048_00000_pcre = cgc_init_regex(read_00048_00000_regex);
      if (read_00048_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00048_00000_pcre, 0, read_00048 + read_00048_ptr, read_00048_len - read_00048_ptr, &read_00048_00000_match);
         if (rc > 0) {
            read_00048_ptr += read_00048_00000_match.match_end - read_00048_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00048_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00048);
      if (read_00048_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00015_00000[] = 
         "\x2a\x2a\x75\x70\x64\x61\x74\x65\x20\x4c\x61\x73\x74\x20\x4e\x61"
         "\x6d\x65\x0a";
      static unsigned int write_00015_00000_len = 19;
      unsigned char *write_00015 = NULL;
      unsigned int write_00015_len = 0;
      write_00015 = cgc_append_buf(write_00015, &write_00015_len, write_00015_00000, write_00015_00000_len);
      if (write_00015_len > 0) {
         cgc_transmit_all(1, write_00015, write_00015_len);
      }
      cgc_free(write_00015);
   } while (0);
   do {
      unsigned char *read_00049;
      unsigned int read_00049_len;
      unsigned int read_00049_ptr = 0;
      //**** length read
      read_00049_len = 11;
      read_00049 = (unsigned char*)cgc_malloc(read_00049_len);
      int read_00049_res = cgc_length_read(0, read_00049, read_00049_len);
      if (read_00049_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00049_00000[] = 
         "\x4c\x61\x73\x74\x20\x4e\x61\x6d\x65\x3a\x20";
      read_00049_ptr += cgc_data_match(read_00049 + read_00049_ptr, read_00049_len - read_00049_ptr, match_00049_00000, 11);
      cgc_free(read_00049);
      if (read_00049_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00016_00000[] = 
         "\x78\x78\x78\x78\x78\x78\x78\x78\x78\x78\x0a";
      static unsigned int write_00016_00000_len = 11;
      unsigned char *write_00016 = NULL;
      unsigned int write_00016_len = 0;
      write_00016 = cgc_append_buf(write_00016, &write_00016_len, write_00016_00000, write_00016_00000_len);
      if (write_00016_len > 0) {
         cgc_transmit_all(1, write_00016, write_00016_len);
      }
      cgc_free(write_00016);
   } while (0);
   do {
      unsigned char *read_00050;
      unsigned int read_00050_len;
      unsigned int read_00050_ptr = 0;
      //**** length read
      read_00050_len = 21;
      read_00050 = (unsigned char*)cgc_malloc(read_00050_len);
      int read_00050_res = cgc_length_read(0, read_00050, read_00050_len);
      if (read_00050_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00050_00000[] = 
         "\x0a\x43\x61\x6e\x64\x69\x64\x61\x74\x65\x20\x49\x6e\x66\x6f\x20"
         "\x46\x6f\x72\x6d\x0a";
      read_00050_ptr += cgc_data_match(read_00050 + read_00050_ptr, read_00050_len - read_00050_ptr, match_00050_00000, 21);
      cgc_free(read_00050);
      if (read_00050_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00051;
      unsigned int read_00051_len;
      unsigned int read_00051_ptr = 0;
      //**** length read
      read_00051_len = 35;
      read_00051 = (unsigned char*)cgc_malloc(read_00051_len);
      int read_00051_res = cgc_length_read(0, read_00051, read_00051_len);
      if (read_00051_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00051_00000[] = 
         "\x0a\x2a\x2a\x2a\x2a\x2a\x2a\x2a\x2a\x2a\x43\x61\x6e\x64\x69\x64"
         "\x61\x74\x65\x20\x49\x6e\x66\x6f\x3a\x2a\x2a\x2a\x2a\x2a\x2a\x2a"
         "\x2a\x2a\x0a";
      read_00051_ptr += cgc_data_match(read_00051 + read_00051_ptr, read_00051_len - read_00051_ptr, match_00051_00000, 35);
      cgc_free(read_00051);
      if (read_00051_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00052;
      unsigned int read_00052_len;
      unsigned int read_00052_ptr = 0;
      //**** delimited read
      static unsigned char read_00052_delim[] = 
         "\x0a";
      read_00052 = NULL;
      read_00052_len = 0;
      int read_00052_res = cgc_delimited_read(0, &read_00052, &read_00052_len, read_00052_delim, 1);
      if (read_00052_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00052_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00052_00000_match;
      pcre *read_00052_00000_pcre = cgc_init_regex(read_00052_00000_regex);
      if (read_00052_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00052_00000_pcre, 0, read_00052 + read_00052_ptr, read_00052_len - read_00052_ptr, &read_00052_00000_match);
         if (rc > 0) {
            read_00052_ptr += read_00052_00000_match.match_end - read_00052_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00052_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00052);
      if (read_00052_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00053;
      unsigned int read_00053_len;
      unsigned int read_00053_ptr = 0;
      //**** delimited read
      static unsigned char read_00053_delim[] = 
         "\x0a";
      read_00053 = NULL;
      read_00053_len = 0;
      int read_00053_res = cgc_delimited_read(0, &read_00053, &read_00053_len, read_00053_delim, 1);
      if (read_00053_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00053_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00053_00000_match;
      pcre *read_00053_00000_pcre = cgc_init_regex(read_00053_00000_regex);
      if (read_00053_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00053_00000_pcre, 0, read_00053 + read_00053_ptr, read_00053_len - read_00053_ptr, &read_00053_00000_match);
         if (rc > 0) {
            read_00053_ptr += read_00053_00000_match.match_end - read_00053_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00053_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00053);
      if (read_00053_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00054;
      unsigned int read_00054_len;
      unsigned int read_00054_ptr = 0;
      //**** delimited read
      static unsigned char read_00054_delim[] = 
         "\x0a";
      read_00054 = NULL;
      read_00054_len = 0;
      int read_00054_res = cgc_delimited_read(0, &read_00054, &read_00054_len, read_00054_delim, 1);
      if (read_00054_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00054_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00054_00000_match;
      pcre *read_00054_00000_pcre = cgc_init_regex(read_00054_00000_regex);
      if (read_00054_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00054_00000_pcre, 0, read_00054 + read_00054_ptr, read_00054_len - read_00054_ptr, &read_00054_00000_match);
         if (rc > 0) {
            read_00054_ptr += read_00054_00000_match.match_end - read_00054_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00054_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00054);
      if (read_00054_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00055;
      unsigned int read_00055_len;
      unsigned int read_00055_ptr = 0;
      //**** delimited read
      static unsigned char read_00055_delim[] = 
         "\x0a";
      read_00055 = NULL;
      read_00055_len = 0;
      int read_00055_res = cgc_delimited_read(0, &read_00055, &read_00055_len, read_00055_delim, 1);
      if (read_00055_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00055_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00055_00000_match;
      pcre *read_00055_00000_pcre = cgc_init_regex(read_00055_00000_regex);
      if (read_00055_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00055_00000_pcre, 0, read_00055 + read_00055_ptr, read_00055_len - read_00055_ptr, &read_00055_00000_match);
         if (rc > 0) {
            read_00055_ptr += read_00055_00000_match.match_end - read_00055_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00055_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00055);
      if (read_00055_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00056;
      unsigned int read_00056_len;
      unsigned int read_00056_ptr = 0;
      //**** delimited read
      static unsigned char read_00056_delim[] = 
         "\x0a";
      read_00056 = NULL;
      read_00056_len = 0;
      int read_00056_res = cgc_delimited_read(0, &read_00056, &read_00056_len, read_00056_delim, 1);
      if (read_00056_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00056_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00056_00000_match;
      pcre *read_00056_00000_pcre = cgc_init_regex(read_00056_00000_regex);
      if (read_00056_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00056_00000_pcre, 0, read_00056 + read_00056_ptr, read_00056_len - read_00056_ptr, &read_00056_00000_match);
         if (rc > 0) {
            read_00056_ptr += read_00056_00000_match.match_end - read_00056_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00056_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00056);
      if (read_00056_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00057;
      unsigned int read_00057_len;
      unsigned int read_00057_ptr = 0;
      //**** delimited read
      static unsigned char read_00057_delim[] = 
         "\x0a";
      read_00057 = NULL;
      read_00057_len = 0;
      int read_00057_res = cgc_delimited_read(0, &read_00057, &read_00057_len, read_00057_delim, 1);
      if (read_00057_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00057_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00057_00000_match;
      pcre *read_00057_00000_pcre = cgc_init_regex(read_00057_00000_regex);
      if (read_00057_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00057_00000_pcre, 0, read_00057 + read_00057_ptr, read_00057_len - read_00057_ptr, &read_00057_00000_match);
         if (rc > 0) {
            read_00057_ptr += read_00057_00000_match.match_end - read_00057_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00057_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00057);
      if (read_00057_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00058;
      unsigned int read_00058_len;
      unsigned int read_00058_ptr = 0;
      //**** delimited read
      static unsigned char read_00058_delim[] = 
         "\x0a";
      read_00058 = NULL;
      read_00058_len = 0;
      int read_00058_res = cgc_delimited_read(0, &read_00058, &read_00058_len, read_00058_delim, 1);
      if (read_00058_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00058_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00058_00000_match;
      pcre *read_00058_00000_pcre = cgc_init_regex(read_00058_00000_regex);
      if (read_00058_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00058_00000_pcre, 0, read_00058 + read_00058_ptr, read_00058_len - read_00058_ptr, &read_00058_00000_match);
         if (rc > 0) {
            read_00058_ptr += read_00058_00000_match.match_end - read_00058_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00058_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00058);
      if (read_00058_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00059;
      unsigned int read_00059_len;
      unsigned int read_00059_ptr = 0;
      //**** delimited read
      static unsigned char read_00059_delim[] = 
         "\x0a";
      read_00059 = NULL;
      read_00059_len = 0;
      int read_00059_res = cgc_delimited_read(0, &read_00059, &read_00059_len, read_00059_delim, 1);
      if (read_00059_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00059_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00059_00000_match;
      pcre *read_00059_00000_pcre = cgc_init_regex(read_00059_00000_regex);
      if (read_00059_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00059_00000_pcre, 0, read_00059 + read_00059_ptr, read_00059_len - read_00059_ptr, &read_00059_00000_match);
         if (rc > 0) {
            read_00059_ptr += read_00059_00000_match.match_end - read_00059_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00059_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00059);
      if (read_00059_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00060;
      unsigned int read_00060_len;
      unsigned int read_00060_ptr = 0;
      //**** delimited read
      static unsigned char read_00060_delim[] = 
         "\x0a";
      read_00060 = NULL;
      read_00060_len = 0;
      int read_00060_res = cgc_delimited_read(0, &read_00060, &read_00060_len, read_00060_delim, 1);
      if (read_00060_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00060_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00060_00000_match;
      pcre *read_00060_00000_pcre = cgc_init_regex(read_00060_00000_regex);
      if (read_00060_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00060_00000_pcre, 0, read_00060 + read_00060_ptr, read_00060_len - read_00060_ptr, &read_00060_00000_match);
         if (rc > 0) {
            read_00060_ptr += read_00060_00000_match.match_end - read_00060_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00060_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00060);
      if (read_00060_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00061;
      unsigned int read_00061_len;
      unsigned int read_00061_ptr = 0;
      //**** delimited read
      static unsigned char read_00061_delim[] = 
         "\x0a";
      read_00061 = NULL;
      read_00061_len = 0;
      int read_00061_res = cgc_delimited_read(0, &read_00061, &read_00061_len, read_00061_delim, 1);
      if (read_00061_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00061_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00061_00000_match;
      pcre *read_00061_00000_pcre = cgc_init_regex(read_00061_00000_regex);
      if (read_00061_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00061_00000_pcre, 0, read_00061 + read_00061_ptr, read_00061_len - read_00061_ptr, &read_00061_00000_match);
         if (rc > 0) {
            read_00061_ptr += read_00061_00000_match.match_end - read_00061_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00061_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00061);
      if (read_00061_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00062;
      unsigned int read_00062_len;
      unsigned int read_00062_ptr = 0;
      //**** delimited read
      static unsigned char read_00062_delim[] = 
         "\x0a";
      read_00062 = NULL;
      read_00062_len = 0;
      int read_00062_res = cgc_delimited_read(0, &read_00062, &read_00062_len, read_00062_delim, 1);
      if (read_00062_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00062_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00062_00000_match;
      pcre *read_00062_00000_pcre = cgc_init_regex(read_00062_00000_regex);
      if (read_00062_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00062_00000_pcre, 0, read_00062 + read_00062_ptr, read_00062_len - read_00062_ptr, &read_00062_00000_match);
         if (rc > 0) {
            read_00062_ptr += read_00062_00000_match.match_end - read_00062_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00062_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00062);
      if (read_00062_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00063;
      unsigned int read_00063_len;
      unsigned int read_00063_ptr = 0;
      //**** delimited read
      static unsigned char read_00063_delim[] = 
         "\x0a";
      read_00063 = NULL;
      read_00063_len = 0;
      int read_00063_res = cgc_delimited_read(0, &read_00063, &read_00063_len, read_00063_delim, 1);
      if (read_00063_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00063_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00063_00000_match;
      pcre *read_00063_00000_pcre = cgc_init_regex(read_00063_00000_regex);
      if (read_00063_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00063_00000_pcre, 0, read_00063 + read_00063_ptr, read_00063_len - read_00063_ptr, &read_00063_00000_match);
         if (rc > 0) {
            read_00063_ptr += read_00063_00000_match.match_end - read_00063_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00063_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00063);
      if (read_00063_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00064;
      unsigned int read_00064_len;
      unsigned int read_00064_ptr = 0;
      //**** delimited read
      static unsigned char read_00064_delim[] = 
         "\x0a";
      read_00064 = NULL;
      read_00064_len = 0;
      int read_00064_res = cgc_delimited_read(0, &read_00064, &read_00064_len, read_00064_delim, 1);
      if (read_00064_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00064_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00064_00000_match;
      pcre *read_00064_00000_pcre = cgc_init_regex(read_00064_00000_regex);
      if (read_00064_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00064_00000_pcre, 0, read_00064 + read_00064_ptr, read_00064_len - read_00064_ptr, &read_00064_00000_match);
         if (rc > 0) {
            read_00064_ptr += read_00064_00000_match.match_end - read_00064_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00064_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00064);
      if (read_00064_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00065;
      unsigned int read_00065_len;
      unsigned int read_00065_ptr = 0;
      //**** delimited read
      static unsigned char read_00065_delim[] = 
         "\x0a";
      read_00065 = NULL;
      read_00065_len = 0;
      int read_00065_res = cgc_delimited_read(0, &read_00065, &read_00065_len, read_00065_delim, 1);
      if (read_00065_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00065_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00065_00000_match;
      pcre *read_00065_00000_pcre = cgc_init_regex(read_00065_00000_regex);
      if (read_00065_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00065_00000_pcre, 0, read_00065 + read_00065_ptr, read_00065_len - read_00065_ptr, &read_00065_00000_match);
         if (rc > 0) {
            read_00065_ptr += read_00065_00000_match.match_end - read_00065_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00065_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00065);
      if (read_00065_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      unsigned char *read_00066;
      unsigned int read_00066_len;
      unsigned int read_00066_ptr = 0;
      //**** delimited read
      static unsigned char read_00066_delim[] = 
         "\x0a";
      read_00066 = NULL;
      read_00066_len = 0;
      int read_00066_res = cgc_delimited_read(0, &read_00066, &read_00066_len, read_00066_delim, 1);
      if (read_00066_res) {} //silence unused variable warning
      /* read match pcre:
.*
*/
      static char read_00066_00000_regex[] = 
         "\x2e\x2a";
      static match_result read_00066_00000_match;
      pcre *read_00066_00000_pcre = cgc_init_regex(read_00066_00000_regex);
      if (read_00066_00000_pcre != NULL) {
         int rc = cgc_regex_match(read_00066_00000_pcre, 0, read_00066 + read_00066_ptr, read_00066_len - read_00066_ptr, &read_00066_00000_match);
         if (rc > 0) {
            read_00066_ptr += read_00066_00000_match.match_end - read_00066_00000_match.match_start;
         }
         else {
            //this is a pov so what does this even mean?
            //why would we quit on failed match, just keep sending stuff.
         }
         pcre_free(read_00066_00000_pcre);
      }
      else {
         //this is a pov so what does this even mean?
         //why would we quit on failed regex compile, just keep sending stuff.
      }
      cgc_free(read_00066);
      if (read_00066_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00017_00000[] = 
         "\x2a\x2a\x65\x78\x69\x74\x0a";
      static unsigned int write_00017_00000_len = 7;
      unsigned char *write_00017 = NULL;
      unsigned int write_00017_len = 0;
      write_00017 = cgc_append_buf(write_00017, &write_00017_len, write_00017_00000, write_00017_00000_len);
      if (write_00017_len > 0) {
         cgc_transmit_all(1, write_00017, write_00017_len);
      }
      cgc_free(write_00017);
   } while (0);
   do {
      unsigned char *read_00067;
      unsigned int read_00067_len;
      unsigned int read_00067_ptr = 0;
      //**** length read
      read_00067_len = 11;
      read_00067 = (unsigned char*)cgc_malloc(read_00067_len);
      int read_00067_res = cgc_length_read(0, read_00067, read_00067_len);
      if (read_00067_res) {} //silence unused variable warning
      //**** read match data
      static unsigned char match_00067_00000[] = 
         "\x54\x68\x61\x6e\x6b\x20\x79\x6f\x75\x21\x0a";
      read_00067_ptr += cgc_data_match(read_00067 + read_00067_ptr, read_00067_len - read_00067_ptr, match_00067_00000, 11);
      cgc_free(read_00067);
      if (read_00067_ptr) {}  //silence unused variable warning if any
   } while (0);
}
