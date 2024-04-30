#include<iostream>
#include<math.h>
#include<iomanip>


class BMI{
    public:

    double height, weight;
    std::string bmi_class;

    double Calc_BMI(int height, int weight){

        double height_in_m = height / 100.00;

        double b_m_i = weight / (height_in_m * height_in_m);


            return b_m_i;
    

    }


    void show_class(double b_m_i){
        if (b_m_i < 16) {
            bmi_class = "Severe Thinness ";
        }

        else if (b_m_i < 17){
            bmi_class = "Moderate Thinness ";
        }

         else if (b_m_i < 18.5){
            bmi_class = "Mild Thinness ";
        }

         else if (b_m_i < 25){
            bmi_class = "Normal ";
        }

         else if (b_m_i < 30){
            bmi_class = "Overweight ";
        }

         else if (b_m_i < 35){
            bmi_class = "Obese Class I";
        }

         else if (b_m_i < 40){
            bmi_class = "Obese Class II ";
        }

         else if (b_m_i > 40){
            bmi_class = "Obese Class III";
        }
        else {
            bmi_class = "Something went wrong! ";
        }
    }
};



int main(){

    std::cout<<"BMI CALCULATOR!! \n\n";

    BMI bmi;
    double input_height, input_weight, x;

    std::cout<<"Enter your height (IN CM): ";
    
    std::cin>>input_height;

    std::cout<<"\n";

    std::cout<<"Enter your weight (IN KG): ";

    std::cin>>input_weight;

    bmi.height = input_height;
    bmi.weight = input_weight;
    x = bmi.Calc_BMI(bmi.height,bmi.weight);
    std::cout<<"Your BMI is: "<<std::setprecision(2)<<x;
    

   std::cout<<"\n";

   bmi.show_class(x);

   std::cout<<"You fall under: "<<bmi.bmi_class<<"category";


}