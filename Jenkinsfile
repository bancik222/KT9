pipeline {
    agent any

    parameters {
        booleanParam(
            name: 'DEBUG',
            defaultValue: true,
            description: 'Включить отладочную сборку'
        )
    }

    stages {
        stage('Информация') {
            steps {
                echo "Ветка: ${env.BRANCH_NAME}"
                echo "DEBUG: ${params.DEBUG}"
            }
        }

        stage('Сборка') {
            steps {
                dir('chess') {
                    sh 'make clean'
                    sh 'make DEBUG=true'
                }
            }
        }

        stage('Запуск') {
            steps {
                dir('chess') {
                    sh './build/chess'
                }
            }
        }
    }
}
