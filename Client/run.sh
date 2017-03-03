export CLASSPATH=$CLASSPATH:./classes:/usr/share/maven-repo/com/zeroc/ice/3.6.3/ice-3.6.3.jar
javac -d classes -classpath classes:/usr/share/maven-repo/com/zeroc/ice/3.6.3/ice-3.6.3.jar Client.java Player/*.java
java Client
