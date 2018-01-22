public class ExampleUnitTest {

    @Test
    public void addition_isCorrect() throws Exception {
        assertEquals(4, 2 + 2);

        double db1 = 0.11;
        double db2 = 1234.32;
        //double db3 = 11_111.11;
        System.out.println(String.format("double1 = %f", db1));
        System.out.println(String.format("double2 = %f", db2));
        System.out.println("(double1 + double2 == 1234.43) = " + (db1 + db2 == 1234.43 ));

        //System.out.println("(11 111.11 * 5 == 55 555.55) = " + (db3 * 5 == 55_555.55));

        System.out.println(db1 + db2);

    }
}
