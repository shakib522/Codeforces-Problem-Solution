import java.util.*

fun main() {
    val scanner=Scanner(System.`in`)
    val k= scanner.nextInt()
    val ara=IntArray(12)
    for (i in 0 .. 11){
        ara[i]=scanner.nextInt()
    }
    ara.sortDescending()
    var sum=0
    var count=0
    for (i in 0 .. 11){
        if(sum<k){
            sum+=ara[i]
            count++
        }else{
            break
        }
    }
    if(sum>=k){
        println(count)
    }else{
        println(-1)
    }
}
