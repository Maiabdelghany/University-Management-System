#pragma once

using namespace System;
using namespace System::Windows::Forms;


namespace UniversitySystem {

    ref class CourseNode {

    public:

        String^ CourseID;
        String^ CourseName;
        int CourseCredits;
        String^ CourseInstructor;
        CourseNode^ left;
        CourseNode^ right;

        CourseNode(String^ id, String^ name, int credits, String^ instructor) {

            CourseID = id;

            CourseName = name;

            CourseCredits = credits;

            CourseInstructor = instructor;

            left = right = nullptr;

        }

    };



    ref class CourseBST {

    public:

        CourseNode^ root;



        CourseBST() { root = nullptr; }



        void AddCourse(String^ id, String^ name, int credits, String^ instructor) {

            root = AddCourseRec(root, id, name, credits, instructor);

        }



        void DeleteCourse(String^ id) {

            root = DeleteCourseRec(root, id);

        }



        CourseNode^ SearchCourse(String^ id) {

            return SearchCourseRec(root, id);

        }



        void InOrderTraversal(CourseNode^ node, DataGridView^ dgv) {

            if (node == nullptr) return;



            InOrderTraversal(node->left, dgv);

            dgv->Rows->Add(

                node->CourseID,

                node->CourseName,

                node->CourseCredits,

                node->CourseInstructor

            );

            InOrderTraversal(node->right, dgv);

        }
        void Clear() {
            ClearRec(root);
            root = nullptr;
        }




    private:

        CourseNode^ AddCourseRec(CourseNode^ node, String^ id, String^ name, int credits, String^ instructor) {

            if (!node) return gcnew CourseNode(id, name, credits, instructor);



            if (id->CompareTo(node->CourseID) < 0)

                node->left = AddCourseRec(node->left, id, name, credits, instructor);

            else if (id->CompareTo(node->CourseID) > 0)

                node->right = AddCourseRec(node->right, id, name, credits, instructor);



            return node;

        }
        void ClearRec(CourseNode^ node) {
            if (node == nullptr) return;
            ClearRec(node->left);
            ClearRec(node->right);
            delete node;
        }



        CourseNode^ MinValueNode(CourseNode^ node) {

            while (node->left != nullptr)

                node = node->left;

            return node;

        }



        CourseNode^ DeleteCourseRec(CourseNode^ node, String^ id) {

            if (!node) return node;



            if (id->CompareTo(node->CourseID) < 0)

                node->left = DeleteCourseRec(node->left, id);

            else if (id->CompareTo(node->CourseID) > 0)

                node->right = DeleteCourseRec(node->right, id);

            else {

                if (!node->left) return node->right;

                if (!node->right) return node->left;



                CourseNode^ temp = MinValueNode(node->right);

                node->CourseID = temp->CourseID;

                node->CourseName = temp->CourseName;

                node->CourseCredits = temp->CourseCredits;

                node->CourseInstructor = temp->CourseInstructor;

                node->right = DeleteCourseRec(node->right, temp->CourseID);

            }

            return node;

        }



        CourseNode^ SearchCourseRec(CourseNode^ node, String^ id) {

            if (!node || node->CourseID->Equals(id)) return node;

            if (id->CompareTo(node->CourseID) < 0)

                return SearchCourseRec(node->left, id);

            return SearchCourseRec(node->right, id);

        }




    };

}