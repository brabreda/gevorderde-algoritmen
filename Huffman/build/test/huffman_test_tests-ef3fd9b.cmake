add_test( Frequentietabel [==[/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test/huffman_test]==] [==[--test-case=Frequentietabel]==] -o report.xml -s -r junit)
set_tests_properties( Frequentietabel PROPERTIES WORKING_DIRECTORY [==[/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test]==] LABELS)
add_test( Coderingstabel [==[/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test/huffman_test]==] [==[--test-case=Coderingstabel]==] -o report.xml -s -r junit)
set_tests_properties( Coderingstabel PROPERTIES WORKING_DIRECTORY [==[/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test]==] LABELS)
add_test( [==[Coderen en decoderen]==] [==[/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test/huffman_test]==] [==[--test-case=Coderen en decoderen]==] -o report.xml -s -r junit)
set_tests_properties( [==[Coderen en decoderen]==] PROPERTIES WORKING_DIRECTORY [==[/home/bram/Documents/school/gevorderde algoritmen/Huffman/build/test]==] LABELS)
set( huffman_test_TESTS Frequentietabel Coderingstabel [==[Coderen en decoderen]==])