package main
import ("fmt")
	"reflect"
	
func main(){	
	fmt.Println(reflect.TypeOf(29))
	fmt.Println(reflect.TypeOf(3.74))
	fmt.Println(reflect.TypeOf("dog"))
	fmt.Println(reflect.TypeOf(false))
}
