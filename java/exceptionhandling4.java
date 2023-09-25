class userexception extends Exception {
    userexception(String e) {
        super(e);
    }
}

class exceptionhandling4 {
    public static void main(String args[]) {
        try {
            throw new userexception("user defiened exception is caught!!!!");
        } catch (userexception obj) {
            System.out.println("" + obj.getMessage());
        }
    }
}