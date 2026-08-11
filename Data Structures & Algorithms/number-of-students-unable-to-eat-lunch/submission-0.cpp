class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int studentCount = students.size();
        queue<int> studentLine;
        for(int student : students){
            studentLine.push(student);
        }
        int remain = studentCount;
        for(int sandwich : sandwiches){
            int count = 0;
            while(count < studentCount && studentLine.front() != sandwich){
                studentLine.push(studentLine.front());
                studentLine.pop();
                count++;
            }
            if(studentLine.front() == sandwich){
                studentLine.pop();
                remain--;
            }else{
                break;
            }
        }
        return remain;
    }
};