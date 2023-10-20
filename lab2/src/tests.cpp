#include <gtest/gtest.h>
#include "../include/Thirdteen.hpp"

TEST(Constructors, Default){
    ASSERT_NO_THROW(lab2::Thirdteen temp;);
}

TEST(Constructors, Sized555){
    ASSERT_NO_THROW(lab2::Thirdteen temp(555, 'A'););
}

TEST(Constructors, SizedZero){
    ASSERT_ANY_THROW(lab2::Thirdteen temp(0, 'A'););
}

TEST(Constructors, Sized100000){
    ASSERT_NO_THROW(lab2::Thirdteen temp(100000, 'A'););
}

TEST(Constructors, InitializerListA56C){
    ASSERT_NO_THROW(lab2::Thirdteen temp({'A', '5', '6', 'C'}););
}

TEST(Constructors, InitializerListZero){
    ASSERT_ANY_THROW(lab2::Thirdteen temp({}););
}

TEST(Constructors, StringA56C){
   ASSERT_NO_THROW(lab2::Thirdteen temp("A56C"););
}

TEST(Constructors, StringZero){
    ASSERT_ANY_THROW(lab2::Thirdteen temp(""););
}

TEST(Constructors, CopyAAA){
    ASSERT_NO_THROW({
        lab2::Thirdteen temp1("AAA");
        lab2::Thirdteen temp2(temp1);
    });
}

TEST(Constructors, CopyEmpty){
    ASSERT_NO_THROW({
        lab2::Thirdteen temp1;
        lab2::Thirdteen temp2(temp1);
    });
}

TEST(Constructors, rvalue){
    ASSERT_NO_THROW(lab2::Thirdteen temp(lab2::Thirdteen("AAA")););
}

TEST(Output, Cout){
    ASSERT_NO_THROW({
        std::ostringstream strm;
        std::streambuf* oldBuf = std::cout.rdbuf();
        std::cout.rdbuf(strm.rdbuf());

        lab2::Thirdteen temp("A56C");
        std::cout << temp;
        ASSERT_EQ("A56C", strm.str());

        std::cout.rdbuf(oldBuf);
    });
}

TEST(Operators, Plus1and4){
    
    lab2::Thirdteen temp1("1");
    lab2::Thirdteen temp2("4");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    std::cout << temp1 + temp2;
    ASSERT_EQ("5", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, Plus1and9){
    
    lab2::Thirdteen temp1("1");
    lab2::Thirdteen temp2("9");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    std::cout << temp1 + temp2;
    ASSERT_EQ("A", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, PlusCCCandAAA){
    
    lab2::Thirdteen temp1("CCC");
    lab2::Thirdteen temp2("AAA");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    std::cout << temp1 + temp2;
    ASSERT_EQ("1AA9", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, Minus1and4){
    
    lab2::Thirdteen temp1("4");
    lab2::Thirdteen temp2("1");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    std::cout << temp1 - temp2;
    ASSERT_EQ("3", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, MinusAand1){
    
    lab2::Thirdteen temp1("A");
    lab2::Thirdteen temp2("1");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    std::cout << temp1 - temp2;
    ASSERT_EQ("9", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, Minus1AA9andCCC){
    
    lab2::Thirdteen temp1("1AA9");
    lab2::Thirdteen temp2("CCC");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());
    
    std::cout << temp1 - temp2;
    ASSERT_EQ("AAA", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, Copy1and4){
    
    lab2::Thirdteen temp1("1");
    lab2::Thirdteen temp2("4");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    temp1 = temp2;
    std::cout << temp1;
    ASSERT_EQ("4", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, Copy1andAAA){
    
    lab2::Thirdteen temp1("1");
    lab2::Thirdteen temp2("AAA");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    temp1 = temp2;
    std::cout << temp1;
    ASSERT_EQ("AAA", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, CopyAAAand4){
    
    lab2::Thirdteen temp1("AAA");
    lab2::Thirdteen temp2("4");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    temp1 = temp2;
    std::cout << temp1;
    ASSERT_EQ("4", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, Plus1and4Copy){
    
    lab2::Thirdteen temp1("1");
    lab2::Thirdteen temp2("4");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    temp1 += temp2;
    std::cout << temp1;
    ASSERT_EQ("5", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, Plus1and9Copy){
    
    lab2::Thirdteen temp1("1");
    lab2::Thirdteen temp2("9");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    temp1 += temp2;
    std::cout << temp1;
    ASSERT_EQ("A", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, PlusCCCandAAACopy){
    
    lab2::Thirdteen temp1("CCC");
    lab2::Thirdteen temp2("AAA");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    temp1 += temp2;
    std::cout << temp1;
    ASSERT_EQ("1AA9", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, Minus1and4Copy){
    
    lab2::Thirdteen temp1("4");
    lab2::Thirdteen temp2("1");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    temp1 -= temp2;
    std::cout << temp1;
    ASSERT_EQ("3", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, MinusAand1Copy){
    
    lab2::Thirdteen temp1("A");
    lab2::Thirdteen temp2("1");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    temp1 -= temp2;
    std::cout << temp1;
    ASSERT_EQ("9", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, Minus1AA9andCCCCopy){
    
    lab2::Thirdteen temp1("1AA9");
    lab2::Thirdteen temp2("CCC");

    std::ostringstream strm;
    std::streambuf* oldBuf = std::cout.rdbuf();
    std::cout.rdbuf(strm.rdbuf());

    temp1 -= temp2;
    std::cout << temp1;
    ASSERT_EQ("AAA", strm.str());

    std::cout.rdbuf(oldBuf);

}

TEST(Operators, Equals1){
    ASSERT_TRUE(lab2::Thirdteen("A56C") == lab2::Thirdteen("A56C"));
}

TEST(Operators, NotEquals1){
    ASSERT_FALSE(lab2::Thirdteen("A56C") == lab2::Thirdteen("AC"));
}

TEST(Operators, NotEquals2){
    ASSERT_TRUE(lab2::Thirdteen("A56C") != lab2::Thirdteen("AC"));
}

TEST(Operators, Equals2){
    ASSERT_FALSE(lab2::Thirdteen("A56C") != lab2::Thirdteen("A56C"));
}

TEST(Operators, Smaller){
    ASSERT_TRUE(lab2::Thirdteen("A56A") < lab2::Thirdteen("A56B"));
}

TEST(Operators, NotSmaller){
    ASSERT_FALSE(lab2::Thirdteen("A56C") < lab2::Thirdteen("A56B"));
}

TEST(Operators, EqualsOrEqual){
    ASSERT_TRUE(lab2::Thirdteen("A56C") <= lab2::Thirdteen("A56C"));
}

TEST(Operators, Bigger){
    ASSERT_TRUE(lab2::Thirdteen("A56C") > lab2::Thirdteen("A56B"));
}

TEST(Operators, NotBigger){
    ASSERT_FALSE(lab2::Thirdteen("A56B") > lab2::Thirdteen("A56C"));
}

TEST(Operators, BiggerOrEqual){
    ASSERT_TRUE(lab2::Thirdteen("A56C") >= lab2::Thirdteen("A56C"));
}

int main(){
    ::testing::InitGoogleTest();

    return RUN_ALL_TESTS();
}